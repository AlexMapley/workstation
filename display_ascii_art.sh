# Meant to run from inside a workstation docker container,
# assumes any ascii art will be located at /src/arc/ascii within
# the container
ls -l /src/art/ascii | awk '{print $9}' | xargs -L 1 -I % cat /src/art/ascii/%