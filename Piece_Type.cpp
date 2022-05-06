//Joseph Fleming
// CSCE 306; Spring 2022
// code modified from: https://github.com/BaranCanOener/ConsoleChess

#include "Pieces.h"
#include "algorithm"

//PAWN IMPLEMENTATION
Pawn::Pawn(Colour colour) :Piece(colour) {
	Piece::colour = colour;
}

char Pawn::getSymbol() {
	return Pawn::symbol;
}

int Pawn::getValue() {
	if (Pawn::colour == Colour::White) {
		return Pawn::value;
	}
	else {
		return -Pawn::value;
	}
}

PieceType Pawn::getPieceType() {
	return Pawn::pieceType;
}


//QUEEN IMPLEMENTATION
Queen::Queen(Colour colour) :Piece(colour) {
	Piece::colour = colour;
}


char Queen::getSymbol() {
	return Queen::symbol;
}

int Queen::getValue() {
	if (Queen::colour == Colour::White) {
		return Queen::value;
	}
	else {
		return -Queen::value;
	}
}

PieceType Queen::getPieceType() {
	return Queen::pieceType;
}


//KING IMPLEMENTATION
King::King(Colour colour) :Piece(colour) {
	Piece::colour = colour;
}

char King::getSymbol() {
	return King::symbol;
}

int King::getValue() {
	if (King::colour == Colour::White) {
		return King::value;
	}
	else {
		return -King::value;
	}
}


PieceType King::getPieceType() {
	return King::pieceType;
}
