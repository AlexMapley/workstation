ps aux | grep bash | grep -v "grep" | head -n -1 | awk '{print $2}' | xargs -L 1 kill -9
q—	ÿwoAU