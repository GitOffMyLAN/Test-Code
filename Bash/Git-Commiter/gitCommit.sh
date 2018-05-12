#!/bin/bash
commitMessage = $1
git add *
git commit -m commitMessage
git push
