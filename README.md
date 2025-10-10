# Net-CPP

🇫🇷 
- Net-CPP, simulation de réseau écrit en C++

🇬🇧 
- Net-CPP, network simulation written in C++

# Description

🇫🇷 \
Le but du projet est d’offrir une représentation claire et pédagogique d’un réseau tout en développant de bonnes pratiques de conception logicielle.
Chaque composant (station, switch, trame…) est implémenté comme une classe C++ indépendante, interagissant selon des règles simples inspirées du modèle OSI.
net-cpp est avant tout un projet personnel d’apprentissage autour de la programmation système et réseau.

🇬🇧 \
The goal of the project is to provide a clear and educational representation of a network while developing good software design practices.
Each component (station, switch, frame, etc.) is implemented as an independent C++ class, interacting according to simple rules inspired by the OSI model.
net-cpp is primarily a personal learning project focused on system and network programming.

# Illustrations

Placeholder

# Technologies / Stack

- C++20
- CMake
- Standard Template Library

# Modalités d'installation et lancement / Installation and execution instructions

🇫🇷 

1) Clonez le dépôt 
```bash
git clone git@github.com:ygr671/net-cpp.git
cd net-cpp
```
2) Compilez le projet
```bash
cd build
cmake ..
make -j$(nproc)
```
3) Exécutez
```bash
./bin/net-cpp
```

🇬🇧 
1) Clone the repository
```bash
git clone git@github.com:ygr671/net-cpp.git
cd net-cpp
```
2) Compile the project
```bash
cd build
cmake ..
make -j$(nproc)
```
3) Run
```bash
./bin/net-cpp
```


# Fonctionalités / Features
 
🇫🇷 \
Implémentées :
- [x] : Gestion des adresses IP et MAC
- [x] : Classes de base : Node, Station, Switch, Link
- [x] : Table de commutation et entrées associées

À venir :
- [ ] : Simulation de trame basique (Frame)
- [ ] : Routage simplifié
- [ ] : Affichage des logs d’échanges
- [ ] : Interface CLI pour visualiser le réseau
- [ ] : Interface graphique
- [ ] : Documentation Doxygen

🇬🇧 \
Implemented:
- [x] : IP and MAC address management
- [x] : Basic classes: Node, Station, Switch, Link
- [x] : Switching table and associated entries

Coming soon:
- [ ] : Basic frame simulation
- [ ] : Simplified routing
- [ ] : Display of exchange logs
- [ ] : CLI interface for viewing the network
- [ ] : Graphical interface
- [ ] : Doxygen documentation

# Utilisation / Usage

🇫🇷 \
net-cpp permet d'expérimenter le comportement d’un réseau à petite échelle sans dépendances externes.
L’application crée et relie des noeuds, échange des trames, et affiche les informations de transmission dans la console.

L'objectif est de fournir une base simple mais extensible, pour comprendre le rôle de chaque couche logicielle dans une communication réseau.

🇬🇧 \
net-cpp allows you to experiment with the behavior of a small-scale network without external dependencies.
The application creates and connects nodes, exchanges frames, and displays transmission information in the console.

The goal is to provide a simple but extensible foundation for understanding the role of each software layer in network communication.

# Notes

🇫🇷 \
Inspiré d'un sujet de projet d'études.

🇬🇧 \
Inspired by a study project.
