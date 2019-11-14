while :
do
        bash run.sh & ps aux | grep "docker exec" | grep -v grep | awk '{print $2}' | xargs -L 1 kill -9 && sleep 3
done
ÑæÁæ±æ