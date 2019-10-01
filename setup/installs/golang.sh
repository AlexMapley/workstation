# get go content and move to /usr/local
wget https://dl.google.com/go/go1.12.7.linux-amd64.tar.gz
tar -xvf go1.12.7.linux-amd64.tar.gz
mv go /usr/local

export GOROOT=/usr/local/go