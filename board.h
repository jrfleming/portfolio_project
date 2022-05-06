// Joseph Fleming
// csce 306; spring 2022
// Portfolio project
// modiefied code from: https://github.com/BaranCanOener/ConsoleChess

//board.h Implementation: 
// Implement struct moveData and ChessBoard Class

// define movedata structrue
struct MoveData
{
	std::tuple<char, char> orig;
	std::tuple<char, char> dest;
	bool validMove = false;
};

// declare chessboard class
class ChessBoard
{
private:
	void initializeOriginalSquares();
	Piece* originalSquares[9][9];

public:
	bool allowIllegalMoves = false;
	Piece* squares[9][9];
	std::tuple<char, char> kingWhiteLocation;
	std::tuple<char, char> kingBlackLocation;
	void resetBoard();
}
