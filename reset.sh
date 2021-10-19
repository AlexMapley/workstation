## Checkout main, reset all commits, and delete all other branches
git stash
git stash --drop
git reset --hard
git checkout main
git pull origin main
git branch | grep -v main | xargs -L 1 git branch -D

## Kill all containers
docker ps | awk '{print $1}' | xargs -L -1 docker rm -f

## Prune images and reset OS specs
docker system prune -af
