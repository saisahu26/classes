//C++ TicTacToe
//Saikapish Sahu
//9/19/23


#include<iostream>

using namespace std;
//constant vars that remained unchanged and can be called from anywhere
const int X_MOVE = 1;
const int O_MOVE = 0;
const int EMPTY = 2;
const int playerone = 1;
const int playertwo = 0;


//all the methods used in the porjects and every var that was passed inside them
int printBoard(int board[3][3], int row);
int setBoard(int board[3][3]);
int playerMove(int board[3][3], int X_MOVE, int O_MOVE, int rowmove, int columnmove, int &move, int playertwo, bool &win, int &playercount, bool &valid);
bool checkWin (int board[3][3], int playercount);
bool isValid (int columnmove, int rowmove, int board[3][3]);

int main () { //this is the main part of the code, where all the other methods are called from, this is also where the user can play again
  char repeat = ' ';
  bool playAgain = true;
  bool whilePlaying = true;
  int playercount = 0;
  bool valid = true;
  int move = 0;
  int board [3][3];
  int row = 3;
  setBoard(board);
  //printBoard(board, row);
  move = playerone;
  int rowmove = 0;
  int columnmove = 0;
  int xwincounter = 0;
  int owincounter = 0;
  bool win = false;
  while (playAgain) {
    setBoard(board);
    printBoard(board, row);
  //the win condtion to see if the game is over
  //int board[3][3];  //the array used for thr 3x3 board
  //int row = 3;
  //setBoard(board); //calling the set board which assigns values to each cell
  //printBoard(board, row); //printing the board after all of the values are set
  //move = playerone; //setting the move to player one or X
    while (whilePlaying) { //while the move is x move, they can move and reprint the board
    //playerMove(board, X_MOVE, O_MOVE, rowmove, columnmove, move, playertwo, win, playercount, valid);
     //printBoard(board, row);
    if (win == false) { //if no one has won yet then you can continue
      playerMove(board, X_MOVE, O_MOVE, rowmove, columnmove, move, playertwo, win, playercount, valid);
	printBoard(board, row);
    }
    if (win == true) { //if won, who has won, and do they want to play again?
      cout << "move: " << move << endl;
      whilePlaying = false;
      if (playercount == 9) {
	cout << "tie" << endl;
	cout << "Do you want to play again?" << endl;
      }
      else if (move == playertwo) {
	owincounter++;
	cout << "O Wins : ";
	cout << owincounter << endl;
	
      }
      else if (move == playerone) {
	xwincounter++;
	cout << "X Wins: ";
	cout << xwincounter << endl;;
  
      }
    }

    if (win == true) {
    cout << "Do you want to play again?" << endl;

    cin >> repeat;
    //cin.ignore(80, '\n');
    if (repeat == 'y') { //y and n siginify yes or no
      cout << "break" << endl;
      setBoard(board);
      printBoard(board, row);
      win = false;
      playercount = 0;
      move = 1;
      whilePlaying = true;
      playAgain = true;
      }
    }
    else if (repeat == 'n') {
      playAgain = false;
      

    }
    }
  }
 

  return 0;

}

int printBoard (int board[3][3], int row) { //function to print the board, - for empty, x for X value, o for O value

  cout << "  1  2  3" << endl;

  for (int i = 0; i < row; i++) {
    cout << i+1;
    for (int j = 0; j < row; j++) {
      if(board[i][j] == EMPTY) {
	cout << " - ";
      }
      else if (board[i][j] == X_MOVE) {
	cout << " X ";
      }
      else if (board[i][j] == O_MOVE) {
	cout << " O ";
      }
    }
    cout << endl;
  }

  
  return 0;

}

int setBoard (int board [3][3]) { //setting the board by default to all empty values

    for(int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
	board[i][j] = EMPTY;
      }
    }

    return 0;
  }

int playerMove (int board[3][3], int X_MOVE, int O_MOVE, int rowmove, int columnmove, int &move, int playertwo, bool &win, int &playercount, bool &valid) { //this method allows the player to move
  valid = true;
  cout << move << endl;
  if (move == playerone) { //start by entering which column and row you want to move
  cin >> rowmove;
  cin >> columnmove;
  //cin.clear();

  //changing it to the numbers used in the console array
  rowmove = rowmove - 1;
  columnmove = columnmove - 1;


  while (valid) {
    cout << "enter" << endl;
    valid = isValid(columnmove, rowmove, board); //check if it is valid

  if (valid == true) {
    board[columnmove][rowmove] = X_MOVE;
    playercount++;
    valid = false;
  }
  else { //if invalid go again
    cout << "Invalid move, enter again" << endl;
    printBoard(board, 3);
    cin >> rowmove;
    cin >> columnmove;

    rowmove = rowmove - 1;
    columnmove = columnmove - 1;
    valid = true; 
  }
  
  win = checkWin (board, playercount); //call win condition after every move

  if (win == false) {
    move = playertwo;
    
  }
  }
  }

  else { //same goes for the O mov e
    cin >> rowmove;
  cin >> columnmove;

  valid = true;

  rowmove = rowmove - 1;
  columnmove = columnmove - 1;

  cout << "enter" << endl;


  while (valid) {
    cout << "enter" << endl;
  valid = isValid(columnmove, rowmove, board);

  if (valid == true) {
    board[columnmove][rowmove] = O_MOVE;
    playercount++;
    valid = false;
  }
  else {
    cout << "Invalid move, enter again" << endl;
    printBoard(board, 3);
    cin >> rowmove;
    cin >> columnmove;

    rowmove = rowmove - 1;
    columnmove = columnmove - 1;
    valid = true;
  }

  win = checkWin (board, playercount);

  }
  if (win == false) {
    move = playerone;
  }

  }

  return 0;
}



  bool isValid (int columnmove, int rowmove, int board [3][3]) {

    if (board[columnmove][rowmove] == EMPTY) {
      return true;
    }
    
    return false;
  }

bool checkWin (int board[3][3], int playercount) { //this function checks if a win has occured (vertical, horizontal, or diagonal, or tie)
  //x win conditions
  if ((board[0][0] == X_MOVE) && (board[1][1] == X_MOVE) && (board[2][2] == X_MOVE)) {
    return true;
  }

  else if ((board[0][2] == X_MOVE) && (board[1][1] == X_MOVE) && (board[2][0] == X_MOVE)) {
    return true;
  }
  else if ((board[0][2] == X_MOVE) && (board[0][1] == X_MOVE) && (board[0][0] == X_MOVE)) {
    return true;
  }
  else if ((board[1][2] == X_MOVE) && (board[1][1] == X_MOVE) && (board[1][0] == X_MOVE)) {
    return true;
  }

  else if ((board[2][2] == X_MOVE) && (board[2][1] == X_MOVE) && (board[2][0] == X_MOVE)) {
    return true;
  }
  else if ((board[0][0] == X_MOVE) && (board[1][0] == X_MOVE) && (board[2][0] == X_MOVE)) {
    return true;
  }
  else if ((board[0][1] == X_MOVE) && (board[1][1] == X_MOVE) && (board[2][1] == X_MOVE)) {
    return true;
  }
  else if ((board[0][2] == X_MOVE) && (board[1][2] == X_MOVE) && (board[2][2] == X_MOVE)) {
    return true;
  }

  //o win conditions
  else if ((board[0][0] == O_MOVE) && (board[1][1] == O_MOVE) && (board[2][2] == O_MOVE)) {
    return true;
  }

  else if ((board[0][2] == O_MOVE) && (board[1][1] == O_MOVE) && (board[2][0] == O_MOVE)) {
    return true;
  }
  else if ((board[0][2] == O_MOVE) && (board[0][1] == O_MOVE) && (board[0][0] == O_MOVE)) {
    return true;
  }
  else if ((board[1][2] == O_MOVE) && (board[1][1] == O_MOVE) && (board[1][0] == O_MOVE)) {
    return true;
  }

  else if ((board[2][2] == O_MOVE) && (board[2][1] == O_MOVE) && (board[2][0] == O_MOVE)) {
    return true;
  }
  else if ((board[0][0] == O_MOVE) && (board[1][0] == O_MOVE) && (board[2][0] == O_MOVE)) {
    return true;
  }
  else if ((board[0][1] == O_MOVE) && (board[1][1] == O_MOVE) && (board[2][1] == O_MOVE)) {
    return true;
  }
  else if ((board[0][2] == O_MOVE) && (board[1][2] == O_MOVE) && (board[2][2] == O_MOVE)) {
    return true;
  }
  else if (playercount == 9) {
    return true;
  }

  
  return false;
 }

// 1 2 3
//1
//2
//3
//make board function
//make print function
//take turn function
//player number 0 - X, 1 - O
//have them input rowcolumn
//function to check if move valid
//make the move
//Exit, switch moves



//NEW NOTES
//is_valid_move;
//place_player;
 
