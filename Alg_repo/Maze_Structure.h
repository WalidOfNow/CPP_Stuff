#pragma once
using namespace ::System;
 ref class Maze_Structure
{
public:
	Maze_Structure(void);
	//Maze_Structure(Maze_Structure^&);
   ~Maze_Structure();
	/*void setup(Maze_Structure^);
	void setright(Maze_Structure^);
	void setdown(Maze_Structure^);
	void setleft(Maze_Structure^);
	Maze_Structure ^getup();
	Maze_Structure ^getright();
	Maze_Structure ^getdown();
	Maze_Structure ^getleft();
	Maze_Structure ^getthis();
	*/
	Maze_Structure ^ up;
	Maze_Structure ^ down;
	Maze_Structure  ^right;
	Maze_Structure  ^left;
	bool Visited; 
};
