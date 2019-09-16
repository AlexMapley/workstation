cd ../ascii;
printf "\n\n";
ls -l | grep .txt | awk '{print $9}' | sort -R | tail -1 | xargs -L 1 cat
printf "\n\n";