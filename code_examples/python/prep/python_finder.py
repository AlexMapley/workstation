import os, re

path = '/Users/Alex/src'

pattern = re.compile("print")
files = []
# r=root, d=directories, f = files
for r, d, f in os.walk(path):
    for file in f:
        if '.py' in file:
            with open(os.path.join(r, file)) as handle:
                lines = handle.readlines()
                for line in lines:
                    if pattern.match(line):
                        print(line)

            files.append(os.path.join(r, file))

for f in files:
    print(f)
