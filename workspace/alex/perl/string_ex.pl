#!/usr/bin/perl
use warnings;
use strict;

my $sentence = "Change cases of a string\n";
print("To upper case:\n");
print(uc($sentence),"\n");
 
print("To lower case:\n");
print(lc($sentence),"\n");


my $s = "Learning Perl is easy";
my $sub = "Perl";
my $p = index($s,$sub); # rindex($s,$sub);
print(qq\The substring "$sub" found at position "$p" in string "$s"\,"\n\n\n");


# extract substring
my $s2 = "Green is my favorite color";
my $color  = substr($s2, 0, 5);      # Green
my $end    = substr($s2, -5);        # color
 
print($end,":",$color,"\n");
 
# replace substring
substr($s2, 0, 5, "Red"); #Red is my favorite color
print($s2,"\n");