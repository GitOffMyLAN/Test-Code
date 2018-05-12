#!/bin/bash
commitMessage = $1
git pull
git add *
git commit -m commitMessage
git push
