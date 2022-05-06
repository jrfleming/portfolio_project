// Joseph Fleming
// CSCE 306; Spring 2022
// portfolio project part 5
// Modified Code from: https://github.com/BaranCanOener/ConsoleChess
#pragma once
#include <tuple>
#include <vector>

enum class Colour {None, White, Black};
enum class PieceType {None, Pawn, Queen, King};

// declare pawn class as child of piece class
class Pawn : public Piece {
private:
	static const char symbol = 'p';
	static const int value = 100;
	static const PieceType pieceType = PieceType::Pawn;

public:
	Pawn(Colour colour);
	char getSymbol() override;
	int getValue() override;
	PieceType getPieceType() override;
};

// declare queen class as child of piece class
class Queen : public Piece {
private:
	static const char symbol = 'Q';
	static const PieceType pieceType = PieceType::Queen;

public:
	Queen(Colour colour);
	char getSymbol() override;
	int getValue() override;
	PieceType getPieceType() override;
};

// declare king class as child of piece class
class King : public Piece {
private:
	static const char symbol = 'K';
	static const PieceType pieceType = PieceType::King;

public:
	King(Colour colour);
	char getSymbol() override;
	int getValue() override;
	PieceType getPieceType() override;
};
