cd ../ascii;
printf "\n\n";
perl /src/art/scripts/starship.pl
ls -l | grep .txt | awk '{print $9}' | sort -R | tail -1 | xargs -L 1 cat
printf "\n\n";