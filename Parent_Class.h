// Joseph Fleming
// CSCE 306; Spring 2022
// portfolio project part 5
// modified code from: https://github.com/BaranCanOener/ConsoleChess

#pragma once
#include <tuple>
#include <vector>

enum class Colour {None, White, Black};
enum class PieceType {None, Pawn, Queen, King};

//Generic piece implementation
//Pieces.h Implementation: 
// Implement Parent Class Piece
// declare piece and define private and public variables

class Piece {
private:
	char symbol = ' '; 
	int value = 0; //the material value of the piece
	PieceType pieceType = PieceType::None;
public:
	Colour colour;
	int moveCount = 0;
	Piece(Colour colour);

	virtual char getSymbol();
	virtual int getValue();
	virtual PieceType getPieceType();
};
