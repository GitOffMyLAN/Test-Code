#!/bin/bash
echo $1
git pull
git add *
git commit -m "$1"
git push
