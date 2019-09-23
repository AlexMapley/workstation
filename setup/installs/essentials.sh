## Anything not added to essentials.sh 
## will cause a crash at system bootup
# General
apt-get -y update
apt-get -y install wget
apt-get -y install man
apt-get -y install git
apt-get -y install build-essential checkinstall

# Text Editing
apt-get -y install vim

# Perl
apt-get -y install rlwrap

# C / C++
apt-get -y install build-essential
apt-get -y install gdb