#include "robot.h"
#include "myList.h"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

class System{
private:
  char **map;
  Robot *robot;
  Point robot_pos;
  Point home_pos;
  LIST *gemList;
  int gemNo;
  int m_w;
  int m_h;
  std::ifstream io;
  bool canRun;
public:
  System(std::string map_f){
	//std::ifstream io;
	io.open(map_f.c_str(),std::ios::in);
	if(!io){
	  std::cout << "Map file does not exist!!!";
	  std::cout << "Gonna use the random map";
	  //initRandom(); //go with the random map
	}
	//else init();
  }
  
  //map from file
  void init(){
	//init the map
	std::string ws = "";
	std::getline(io,ws);
	m_w = ws.length();
	io.seekg(std::ios::beg,std::ios::end);
	m_h = io.tellg()/m_w;
	io.seekg(std::ios::beg);
	map = new char*[m_h];
	gemList = new LIST(m_w/2);
	for (int y = 0; y < m_h; ++y){
	  map[y] = new char[m_w];
	  for (int x = 0; x < m_w; ++x){
	    io >> map[y][x];
	    switch(map[y][x]){
	      case 'H':case 'h': home_pos.set(y,x);
				 break;
	      case '>':case '<':
	      case '^':case 'v': robot_pos.set(y,x);
			         break;
	      case 'G':case 'g': gemList->add(y,x);
			         break;
	    }
	  }
	  
	}
	//std::cout << m_w << std::endl;
	//std::cout << m_h << std::endl;
  }
  
  void generateMap(){
	//clear all the value first
  }
  
  void run(){
	if (canRun){
	  while(!win()){
		//executeCommand(parseCommand());
		//drawMap();
	  }
	}
  }
  
  std::vector<std::string> parseCommand(){
	std::string commandLine;
	std::getline(std::cin,commandLine);
	
	std::vector<std::string> commandList;
	std::string command = "";
	
	//tokenize a line
	std::istringstream input(commandLine);
	while (input >> command){
	  commandList.push_back(command);
	}
	
	return commandList;
  }
  
  //find the function in the table to execute
  void executeCommand(std::vector<std::string>&commandList){
	
	
  }
  
  bool win(){
	return gemNo == 0;
  }
};