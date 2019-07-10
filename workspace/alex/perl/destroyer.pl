#!/usr/bin/perl
use warnings;
use Config;

print "\n", $^O, "\n";

print "$Config{osname}\n";
print "$Config{archname}\n\n";

# if ($^O eq "linux") {
#     my $pm;

#     do{
#         if (-x qx(type -p $_ | tr -d "\n")) {
#             $pm = $_;
#             last;
#         }
#     } for qw/apt-get aptitude yum emerge pacman urpmi zypper/;

#     print $pm;
# }