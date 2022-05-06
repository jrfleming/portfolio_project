// Joseph Fleming   
 // CSCE 306; Spring 2022
 // Portfolio Assignment - fleming_portfolio.cpp
// portfolio project part 5
// modified code from: https://github.com/BaranCanOener/ConsoleChess
 // Code Summary: This source code file is for the portfolio assignment ...with more details provided here. 


#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <windows.h>
#include "Piece.h"
#include "Piece_Type.h"
#include "board.h"
#include <ctime>



char numToLetter(char coord) {
	switch (coord)
	{
	case 0:
		return 'a';
		break;
	case 1:
		return 'b';
		break;
	case 2:
		return 'c';
		break;
	case 3:
		return 'd';
		break;
	case 4:
		return 'e';
		break;
	case 5:
		return 'f';
		break;
	case 6:
		return 'g';
		break;
	case 7:
		return 'h';
		break;
	default:
		return 128
	}
}


std::string numberToString(int Number) {
	std::ostringstream ss;
	ss << Number;
	return ss.str();
}


void printBoard(ChessBoard* board, std::vector<std::tuple<char, char, char, char>>* moveList, MoveData* move) {

}

Colour switchColour(Colour colour) {
	if (colour == Colour::White) {
		return Colour::Black;
	}
	else {
		return Colour::White;
	}
}


int main(){

	// welcome user
	cout << "Welcome to King's Watchmen! " << endl;

	// give sentinel value to close program
	cout << "to exit the program type exit" << endl;

	// tell user how to reset board
	cout << " to reset the board type reset" << endl;

	// create chessboard object
	ChessBoard board;

	//create movedata object
	MoveData move;

	//create color object
	Colour colour = Colour::White;

	// set movecount 
	int moveCount = 1;

	// declare command string
	std::string command = " ";

	//call printBoard
	printBoard(&board, nullptr, nullptr);
	
	// while code, sentinel value
	while ((command != "exit") && (command != "")){
	
	if (command == "exit") {
			continue;
		}
	

	// check if user input = 4
	else if (command.length() == 4) {
		
				move = board.moveTo(orig, dest);
				// convert the x coordinate letters to num and set to xvariables
				if ((xOrig > xDest && (xOrig - xDest > board.roll)) || (xOrig < xDest && (xDest - xOrig > board.roll)))
				{
					std::cout << "Horizontal Move is greater than your dice roll" << std::endl;
					move.validMove = false;
				}
				// set y coordinates to variables
				if ((yOrig > yDest && (yOrig - yDest > board.roll)) || (yOrig < yDest && (yDest - yOrig > board.roll)))
				{
					std::cout << "Vertical Move is greater than your dice roll" << std::endl;
					move.validMove = false;

				}
				if (!move.validMove) {
					std::cout << "Invalid move" << std::endl;
				}
				// print board with new move
				else {
					printBoard(&board, nullptr, &move);
					printMoveType(&move);
					colour = switchColour(colour);
				}
			}

			else std::cout << "Invalid coordinates" << std::endl;
		}
		else std::cout << "Invalid command" << std::endl;

		return 0;
}
