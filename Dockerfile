FROM ubuntu:latest

CMD ["mkdir /src"]

Add . /src

WORKDIR /src/

CMD ["cp /src/init.sh /init.sh && bash /init.sh && date > last_build"]