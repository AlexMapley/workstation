# run.sh will compose a new workstation instance
# with docker if it did not already exist.
# Once done, or if already done previously,
# it will begin a new bash user session via 
# the user_daemon container.
docker-compose up -d
containerID=$(docker ps | grep ubuntu | awk '{print $1}')

docker exec -it $containerID bash -c "tput setaf $(( RANDOM % 7 + 1)); cd /src/art/scripts/; bash display_random.sh; cd /src/; tput sgr0; echo"
docker exec -it $containerID /bin/bash
