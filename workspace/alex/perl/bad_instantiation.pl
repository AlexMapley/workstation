#!/usr/bin/perl
use warnings;
$color = 'red';
print("my favorite #1 color is " . $color . "\n");
 # another block
{
     my $color = 'blue';
     print("my favorite #2 color is " . $color . "\n");  
}
# for checking
print("my favorite #1 color is " . $color . "\n");