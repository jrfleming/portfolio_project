// Joseph Fleming
// CSCE 306; Spring 2022
// code modified from: https://github.com/BaranCanOener/ConsoleChess

#include "Pieces.h"
#include "algorithm"

Piece::Piece(Colour colour) {
	Piece::colour = colour;
	Piece::moveCount = 0;}

char Piece::getSymbol() {
	return Piece::symbol;
}

int Piece::getValue() {
	return Piece::value;
}

PieceType Piece::getPieceType() {
	return Piece::pieceType;
}
