import os, platform

print("\n\n",platform.system(),"\n\n")
if platform.system() == "Windows":
    import msvcrt
def getch():
    if platform.system() == "Linux":
        os.system("bash -c \"read -n 5\"")
    else:
        msvcrt.getch()

print("Type 5 keys!")
getch()
print("\nOkay")

dir = os.popen("ls").readlines()
print(dir)