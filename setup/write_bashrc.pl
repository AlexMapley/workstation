use strict;
use warnings;

open(my $fd, ">>/root/.bashrc") or die "Couldn't open: $!";

print $fd("\n\n# Autogenerated Aliases\n");
print $fd("alias c=\"clear\"\n");
print $fd("alias src=\"cd /src\"\n");
print $fd("alias python=\"python3\"\n");
print $fd("alias py=\"python\"\n");

print $fd("\n\n# Funcs\n");
print $fd("parse_git_branch() {\n\tgit branch 2> /dev/null | sed -e '/^[^*]/d' -e 's/* \(.*\)/(\1)/'\n}\n");
print $fd("export PS1=\"\u@\h \[\e[32m\]\w \[\e[91m\]\$(parse_git_branch)\[\e[00m\]$ \"\n");
