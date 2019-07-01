FROM ubuntu:latest

Add . /src

WORKDIR /src

CMD ["date > last_build"]