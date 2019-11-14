#!/usr/bin/perl
use warnings;

## Cant use strict for 
# use strict;
 
print(()); # display nothing
print("\n");
print(10,20,30); # display 10,20,30
print("\n");
print("this", "is", "a","list"); # display: thisisalist
print("\n");

my $x = 10;
my $s = "a string";
print("complex list", $x , $s ,"\n");

print('red','green','blue'); # redgreenblue
print("\n");
 
#`redgreenblue`foobarbizbazquxquaz
print("\n",qw(`red green blue
`));
print(qw(foo bar biz baz qux quaz),"\n"); #


print("\n", qw\this is a list\, "\n");
print(qw{this is a list},           "\n");
print(qw[this is a list],      '\n',                 "\n");
print("\n\n");


# my $foo1 = (2,3,4,(5,6))
# my $foo2 = (2,3,4,5,6)
# my $foo3 = ((2,3,4),5,6)

 
# print($foo1 <=> $foo2, " ", $foo2 <=> $foo3, " ", $foo3 <=> $foo1, "\n");

print(
     (1,2,3)[0] # 1 first element
);
print "\n"; # new line
 
print(
     (1,2,3)[2] # 3 third element
);
print "\n\n"; # new line


print(
     (1..100) 
);
print "\n\n"; 
 
print(
     (a..Z)
);
print "\n\n";
