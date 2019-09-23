# Python 3.5.6
## Will require timezone entry, 2-105 for America-NewYork
apt-get install libreadline-gplv2-dev libncursesw5-dev libssl-dev libsqlite3-dev tk-dev libgdbm-dev libc6-dev libbz2-dev -qq
cd /usr/src
wget https://www.python.org/ftp/python/3.5.6/Python-3.5.6.tgz
tar xzf Python-3.5.6.tgz
cd Python-3.5.6
./configure --enable-optimizations