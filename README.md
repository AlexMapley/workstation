# Workstation

Workstation is a dockerized ubuntu environment, meant for ease of development. Good place for tutorials and learning new skills.

## Getting Started

Assuming you have both `docker` and `docker-compose` up and running on your local machine, you should be good to go with spinning up a new Workstation instance. Just run:

```
bash run.sh
```

to fire off a new build and create a new bash session.

To install all dependencies enumerated in the `README`, as well as updating the `.bashrc`, run:

```
bash init.sh
```

This should take a few minutes, and will require some interactivity specifically for setting up python.

## Technologies Supported
- Mysql
- Bash
- Perl
- OCaml
- Python 3.5


## Plugins
- Vim