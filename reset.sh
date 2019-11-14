## Checkout master, reset all commits, and delete all other branches
git stash
git stash --drop
git reset --hard
git checkout master
git pull origin master
git branch | grep -v master | xargs -L 1 git branch -D

## Kill all containers
docker ps | awk '{print $1}' | xargs -L -1 docker rm -f

## Prune images and reset OS specs
docker system prune -af
±ÇQóÿÿÿ