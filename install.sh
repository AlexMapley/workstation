# setup bashrc and install essentials
perl /src/setup/write_bashrc.pl 
source /root/.bashrc 

# Skipn
# bash /src/setup/installs/golang.sh 
# bash /src/setup/installs/essentials.sh 
# bash /src/setup/installs/networking.sh 

perl /src/art/scripts/starship.pl

# write .vimrc
cp /src/setup/vimrc ~/.vimrc
