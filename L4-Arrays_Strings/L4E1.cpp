/*
  ---------- EXERCISE 1 ----------
  Declare an array that represents the squares on the chessboard; the array should be
  an enum that defines the pieces that may possibly occupy the squares.
  
  Hint: The `enum` will contain enumerators (`Pawn`, `Rook`, `Bishop`, and so on), thereby
  limiting the range of possible values that the elements in the array can hold. Don't 
  forget that a cell may also be empty.

*/

#include <iostream>
using namespace std;

int main()
{
  enum Square 
  {
    Empty = 0,
    Pawn,
    Rook,
    Knight,
    Bishop,
    King,
    Queen
  };

  Square chessBoard[8][8]; // 8 rows x 8 columns

  // Initialize the squares containing rooks
  chessBoard[0][0] = chessBoard[0][7] = Rook;
  chessBoard[7][0] = chessBoard[7][7] = Rook;
  
  return 0;
}