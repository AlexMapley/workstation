FROM ubuntu:latest

ENV TZ=Europe/Minsk
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

CMD ["mkdir /src"]

Add . /src

WORKDIR /src/

RUN chmod 777 /src/setup/installs/essentials.sh && \
    /src/setup/installs/essentials.sh

CMD ["cp /src/init.sh /init.sh && bash /init.sh && date > last_build"]