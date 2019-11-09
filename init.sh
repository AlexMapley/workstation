# setup bashrc and install essentials
perl /src/setup/write_bashrc.pl && bash setup/installs/essentials.sh; source /root/.bashrc; perl art/scripts/starship.pl

# write .vimrc
cp /src/setup/vimrc ~/.vimrc
