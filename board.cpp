//Joseph Fleming
//CSCE 306; spring 2022
// modified code from: https://github.com/BaranCanOener/ConsoleChess

#include "board.h"
#include <random>


MoveData ChessBoard::moveTo(std::tuple<char, char> orig, std::tuple<char, char> dest) {
	MoveData move;
	move.orig = orig;
	move.dest = dest;

	//update board: set squares to new values
	ChessBoard::squares[std::get<0>(dest)][std::get<1>(dest)] = move.pieceMoved;
	ChessBoard::squares[std::get<0>(orig)][std::get<1>(orig)] = nullptr;
	move.validMove = true;

}


ChessBoard::ChessBoard() {
	ChessBoard::initializeOriginalSquares();
	ChessBoard::resetBoard();
}
