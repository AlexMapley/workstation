use String::MkPasswd qw(mkpasswd);
 
print mkpasswd();
 
# for the masochisticly paranoid...
print mkpasswd(
    -length     => 27,
    -minnum     => 5,
    -minlower   => 1,   # minlower is increased if necessary
    -minupper   => 5,
    -minspecial => 5,
    -distribute => 1,
);