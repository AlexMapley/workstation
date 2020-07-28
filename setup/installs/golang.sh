# get go content and move to /usr/local
wget https://dl.google.com/go/go1.14.6.linux-amd64.tar.gz
cd /
shasum -a 256 go1.14.6.linux-amd64.tar.gz
# tar -C /src -xvzf go1.14.6.linux-amd64.tar.gz


tar -xf go1.14.6.linux-amd64.tar.gz
rm go1.14.6.linux-amd64.tar.gz

mv go /bin/go
chmod +

# Set path to golang binaries as well as GoPath
export GOROOT=/src
export GOPATH=/src
export GOBIN=/src

