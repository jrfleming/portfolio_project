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
