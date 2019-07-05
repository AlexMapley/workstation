#!/usr/bin/perl
use warnings;
use strict;
 
my $a = 0b0101; # 5
my $b = 0b0011; # 3
 
my $c = $a & $b; # 0001 or 1
print $c, "\n";
 
$c = $a | $b; # 0111 or 7
print $c, "\n";
 
# exclusive or
$c = $a ^ $b; # 0110 or 6
print $c, "\n";
 
# not
$c = ~$a; # 11111111111111111111111111111010 (64bits computer) or 4294967290
print $c, "\n";
 
$c = $a >> 1; # 0101 shift right 1 bit, 010 or 2
print $c, "\n";
 
$c = $a << 1; # 0101 shift left 1 bit, 1010 or 10
print $c, "\n";

print $a <=> $b, "\n";


$a = 10;
$b = 20;
 
print $a <=> $b, "\n";
 
$b = 10;
print $a <=> $b, "\n";
 
$b = 5;
print $a <=> $b, "\n";

