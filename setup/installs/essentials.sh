## Anything not added to essentials.sh 
## will cause a crash at system bootup
# General
apt-get update -qq
apt-get install wget -qq
apt-get install man -qq
apt-get install git -qq
apt-get install build-essential checkinstall -qq

# Text Editing
apt-get install vim -qq

# Perl
apt-get install rlwrap -qq

# C / C++
apt-get install build-essential -qq
apt-get install gdb -qq


# # OCaml
# apt install ocaml -qq

# # Mysql Server
# apt-get install install mysql-server -qq
