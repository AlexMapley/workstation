docker-compose up -d 

containerID=$(docker ps | grep ubuntu | awk '{print $1}')
docker exec -it $containerID /bin/bash
