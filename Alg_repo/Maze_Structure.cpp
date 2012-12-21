#include "Maze_Structure.h"
 Maze_Structure::Maze_Structure(){
	 setup(nullptr);
	 setright(nullptr);
	 setdown(nullptr);
	 setleft(nullptr);
};
 Maze_Structure::~Maze_Structure(){
	
 };
 Maze_Structure::Maze_Structure(Maze_Structure^& M){
	this->setup(M->getup);
	this->setright(M->getright);
	this->setdown(M->getdown);
	this->setleft(M->getleft);
 };
  void Maze_Structure::setup(Maze_Structure ^M){
	this->up = M;
};
 void Maze_Structure::setright(Maze_Structure ^M){
	this->right = M;
};
void  Maze_Structure::setleft(Maze_Structure ^M){
	this->left = M;
};
void  Maze_Structure::setdown(Maze_Structure ^M){
	this->down = M;
};

Maze_Structure^ Maze_Structure::getup(){
	return (this->up);
};
Maze_Structure^ Maze_Structure::getright(){
	return this->right;
};
Maze_Structure^ Maze_Structure::getdown(){
	return this->right;
};
Maze_Structure^ Maze_Structure::getleft(){
	return this->left;
};
 


