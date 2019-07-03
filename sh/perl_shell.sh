#!/bin/sh
echo 'This is Interactive Perl shell'
perl -v | head -2
rlwrap -A -pgreen -S"perl> " perl -wnE'say eval()//$@'