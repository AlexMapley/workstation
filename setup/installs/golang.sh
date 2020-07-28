# get go content and move to /usr/local
wget https://dl.google.com/go/go1.14.6.linux-amd64.tar.gz
shasum -a 256 go1.14.6.linux-amd64.tar.gz
sudo tar -C /src -xvzf go1.7.3.linux-amd64.tar.gz


rm go1.12.7.linux-amd64.tar.gz
mv ./go /bin/go
chmox +

# Set path to golang binaries as well as GoPath
export GOROOT=/src
export GOPATH=/src
export GOBIN=/src

