#include <iostream>
#include <stdio.h>
using namespace std;

int numbers[8] = {8, 7, 6, 5, 4, 3, 2, 1};
char board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                    {'r', 'n', 'b', 'k', 'q', 'b', 'n', 'r'}};
void printboard() {
  int i, j;
  for (i = 0; i < 8; i++) {
    cout << numbers[i]<<' ';
    for (j = 0; j < 8; j++) {
      cout << board[i][j]<<' ';
    }
    cout << endl;
  }
  cout << "  ";
  for (i = 1; i < 9; i++)
    cout << i << ' ';
}
int main() {
  printboard();
  return 0;
}
