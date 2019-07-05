use strict;
use warnings;

open(my $fd, ">>/root/.bashrc") or die "Couldn't open: $!";

print $fd("alias c=\"clear\"\n");
print $fd("alias alex=\"cd /src/workspace/alex\n\"");