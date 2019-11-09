FROM ubuntu:latest

CMD ["mkdir /src"]

Add . /src
RUN cp /src/init.sh /init.sh
RUN bash init.sh

CMD ["date > last_build"]