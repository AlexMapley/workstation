#!/usr/bin/perl
use warnings;
use Config;

print "\n1. ", $^O, "\n";
print "2. ", "$Config{osname}\n";
print "3. ", "$Config{archname}\n\n";


if ($^O eq "linux") {
    print "///////////////////////////////////////////\n\n\n"
}

use POSIX qw(:sys_wait_h);

my $timeOut = 5;

$SIG{ALRM} = \&timeout;
$SIG{CHLD} = 'IGNORE',
alarm($timeOut);

my $childPid = fork();
if ($childPid) {
    while(1) {
        print "[$$]: parent...\n"; 
        sleep(2); 
    }
}else {
    # I am the child - do something that blocks forever
    while(1){
        print "[$$]: child...\n";
        sleep(2);
    }
    exit;
}

sub timeout {
    print "killing $childPid\n";
    print "###\n" . `ps -ef | grep -v grep | grep perl` . "###\n";
    if ( ! (waitpid($childPid, WNOHANG)) ) {
        print "killing $childPid...\n";
        kill 9, $childPid;
        die "[$$]: exiting\n";
    }
}