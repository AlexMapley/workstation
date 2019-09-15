# Workstation
Workstation is a dockerized ubuntu environment, meant for ease of development. Good place for tutorials and learning new skills.

## Getting Started
Assuming you have both `docker` and `docker-compose` up and running on your local machine, you should be good to go with spinning up a new Workstation instance. Just run:

```
bash run.sh
```

to fire off a new build and tunnel into an new bash session.

To install all dependencies enumerated in the `README`, as well as updating the `.bashrc`, run:

```
bash init.sh
```

This should take a few minutes, and may require some interactivity (specifically for setting up python). Currently the best way to pick/choose language dependencies is to manually comment in/out that `init.sh` file, working on that in the future. 

## Technologies Supported
- Mysql
- Bash
- Perl
- OCaml
- Python 3.5
- C


## Plugins
- Vim

## Contribution Notes
This is more so a personal playground rather than an open software project. I would recommend forking this repository for personal use and wiping out everything under the `workspace/` heirarchy.

Git commit messages are non-standard and otherwise difficult to follow, as much of the work done here is only meant for version controlling personal progress as opposed to providing readability.