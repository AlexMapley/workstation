#!/usr/bin/perl
use strict;
use warnings;

our $color = 'red';
 
my $amount = 20;
my $s = "The amount is $amount\n";
print($s);

my $a = 123_763_213;
print($a, "\n"); # 123763213

my $s1 = "string with doubled-quotes";
my $s2 = 'string with single quote';

print("\n\n", $s1, "\n\n\n", $s2, "\n\n")

my $name = 'Jack';
my $s3 = qq/"Are you learning Perl String today?"$name asked./;
print($s3 ,"\n");

my $s4 = q^A string with different delimiter ^;
print($s4,"\n");

my $s5 = q/"Are you learning Perl String today?" We asked./;
print($s5 ,"\n");