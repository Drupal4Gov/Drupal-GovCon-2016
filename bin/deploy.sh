#!/bin/bash

echo "Set up environment & SSH keys"
keychain ~/.ssh/id_rsa ~/.ssh/staging_id_rsa || exit $?
source ~/.keychain/*-sh || exit $?

client=drupal4gov
project=drupal4gov
branch=`git describe --contains --all HEAD`
#branch=`git branch 2>/dev/null| sed -n '/^\*/s/^\* //p'`
host=`hostname`

echo "Deploying $branch from $host"

case "$branch" in
  *HEAD|*master)
    echo "Deploying master to drupal4gov.sqm.io from $host"
    ssh -T -o ForwardAgent=yes -o StrictHostKeyChecking=no -i /home/gitlab_ci_runner/.ssh/staging_id_rsa -p 22421 gitlab_ci_runner@drupal4gov.sqm.io "~/auto-deploy/auto-deploy-gitlab.sh $client $project master" || exit $?
    ;;
  *staging)
    echo "Deploying to staging from $host"
    ssh -T -o ForwardAgent=yes -o StrictHostKeyChecking=no -i /home/gitlab_ci_runner/.ssh/staging_id_rsa -p 22421 gitlab_ci_runner@staging.sqm.io "~/auto-deploy/auto-deploy-gitlab.sh $client $project staging" || exit $?
    ;;
  *prod)
    echo "prod, doing nothing"
    ;;
  *)
    echo "Error: $branch"
    ;;
esac

#echo "Push status: $?"
