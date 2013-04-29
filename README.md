Karel_robot
===========

everybody knows what it is\
Karel grab gems\

Structure
=========
robot - the robot class
+can turn all direction

system - the system
+manage the 2d map
+the gem list(currently need works)
+the commandsystem

myList - the ternary search tree
[In progress]

text - the map file(currently trying to load maps from file)
map format:
############
##        ##
##H      g##
##  ##    ##
##g ###   ##
#######>####
############

# : Wall
H : home
>/</^/v : Karel
g : gems

TO DO:
======
-Gonna try store the gemlist in the ternary search tree(tree with three childrens) for faster search if the number of gems are crazy
-Map generation : so that do not need to try to create map by hands. Resource(currently looking) : http://pcg.wikidot.com/pcg-algorithm:map-generation

