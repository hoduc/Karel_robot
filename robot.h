#include <iostream>

//direction ==> for the array direction
#define NORTH               0 
#define EAST                1
#define SOUTH               2
#define WEST                3

#define LEFT	           -1
#define RIGHT               1
#define HALF_CIRCLE_LEFT    2
#define HALF_CIRCLE_RIGHT  -2
#define FULL_CIRLCE_LEFT    4
#define FULL_CIRCLE_RIGHT  -4 

int direction[] = {-1,1,1,-1};
char Icon[] = {'^', '>', 'v', '<'};

class Robot{
public:
  Robot(int x = 0, int y = 0, int gem = 0, int dir = NORTH){
	this->x = x;
	this->y = y;
	this->dir = dir;
	this->icon = Icon[dir];
	this->gem = gem;
  }
  
  void turn(int way){
	dir = (dir + way)%4;
	if (dir < 0)
	  dir = this->dir + 4;
	icon = Icon[dir];
  }
  
  void move(int step){
	std::cout << "direction: " << dir;
	for (int i = 0; i < step; ++i){
	  //std::cout << direction[dir];
	  switch(dir){
		case EAST:case WEST: x = x + direction[dir];
						     break;
		case NORTH:case SOUTH: y = y + direction[dir];
							  break;
	  
	  }
	}
  
  }
  
  void incGem(){	
    this->gem++;
  }
  int getX(){
	return x;
  }
  
  int getY(){
	return y;
  }
  
  char getIcon(){
	return icon;
  }
  
private:
  int x;
  int y;
  int dir;
  char icon;
  int gem;
};
