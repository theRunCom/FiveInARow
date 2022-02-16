#pragma once
class Panel {
public:
	Panel();
	~Panel();

	// Initializing the board.
	void initial();
	// The size of the board is 15x15.
	const int P_size = 15;
	// size[i][j]=0 -> None
	// size[i][j]=1 
	// size[i][j]=-1 
	int size[15][15];
	// Print the board and pieces.
	void print();
};