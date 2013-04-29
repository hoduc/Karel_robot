Karel_robot
===========

everybody knows what it is<br />
Karel grab gems<br />

Structure
=========
robot - the robot class<br />
+can turn all direction<br />

system - the system<br />
+manage the 2d map<br />
+the gem list(currently need works)<br />
+the commandsystem<br />

myList - the ternary search tree<br />
[In progress]<br />

text - the map file(currently trying to load maps from file)<br />
map format:<br />

#: Wall<br />
H: home<br />
>/</^/v: Karel<br />
g: gems<br />

TO DO:<br />
======
-Gonna try store the gemlist in the ternary search tree(tree with three childrens) for faster search if the number of gems are crazy<br />
-Map generation : so that do not need to try to create map by hands. Resource(currently looking) : http://pcg.wikidot.com/pcg-algorithm:map-generation<br />

