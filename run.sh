# run.sh will compose a new workstation instance
# with docker if it did not already exist.
# Once done, or if already done previously,
# it will begin a new bash user session via 
# the user_daemon container.

## Docker display
docker ps

docker-compose up -d
containerID=$(docker ps | grep ubuntu | awk '{print $1}')

docker exec -it $containerID bash -c "tput setaf $(( RANDOM % 7 + 1)); cd /src/art/scripts/; bash display_random.sh; cd /src/; tput sgr0; echo"
docker exec -it $containerID /bin/bash

# Example output
# $ bash run.sh 
# CONTAINER ID        IMAGE               COMMAND             CREATED             STATUS              PORTS                    NAMES
# 25e9d3558b4a        ubuntu              "sleep infinity"    2 minutes ago       Up 2 minutes        0.0.0.0:8000->8000/tcp   user_daemon
# user_daemon is up-to-date


# Art by Donovan Bake
#          *                 *                  *              *
#                                                       *             *
#                         *            *                             ___
#   *               *                                          |     | |
#         *              _________##                 *        / \    | |
#                       @\\\\\\\\\##    *     |              |--o|===|-|
#   *                  @@@\\\\\\\\##\       \|/|/            |---|   |d|
#                     @@ @@\\\\\\\\\\\    \|\\|//|/     *   /     \  |w|
#              *     @@@@@@@\\\\\\\\\\\    \|\|/|/         |  U    | |b|
#                   @@@@@@@@@----------|    \\|//          |  S    |=| |
#        __         @@ @@@ @@__________|     \|/           |  A    | | |
#   ____|_@|_       @@@@@@@@@__________|     \|/           |_______| |_|
# =|__ _____ |=     @@@@ .@@@__________|      |             |@| |@|  | |
# ____0_____0__\|/__@@@@__@@@__________|_\|/__|___\|/__\|/___________|_|_
# root@25e9d3558b4a:/# 
