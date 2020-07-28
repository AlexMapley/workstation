cd /src/art/ascii 
ls -l /src/art/ascii | awk '{print $9}' | xargs -L 1 cat
cd /src