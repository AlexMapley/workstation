# get go content and move to /usr/local
wget https://dl.google.com/go/go1.12.7.linux-amd64.tar.gz
tar -xvf go1.12.7.linux-amd64.tar.gz
mv ./go /bin/go

# Set path to golang binaries as well as GoPath
export GOROOT=/usr/local/go
export GOPATH=/src   

# Allow go binary access system-wide 
export PATH=$GOPATH/bin:$GOROOT/bin:$PATH

# Verify go setup
go version
go env