/*
 * Q6.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */



int board[9][9];

void printBoard();

int main() {
	memset(board, 0, sizeof(board));

	int m, n, i, j, k;
	cin >> m >> n;

	board[4][4] = m;
	for (i = 3; i < 6; i++)
		for (j = 3; j < 6; j++)
			board[i][j] += m;

	int temp[9][9];
	if (n >= 2) {
		memset(temp, 0, sizeof(temp));
		for (i = 3; i < 6; i++)
			for (j = 3; j < 6; j++) {
				board[i][j] *= 2;
				temp[i][j] = board[i][j];
			}
		//printBoard();
		for (i = 3; i < 6; i++)
			for (j = 3; j < 6; j++) {
				board[i - 1][j] += temp[i][j] / 2;
				board[i + 1][j] += temp[i][j] / 2;
				board[i][j + 1] += temp[i][j] / 2;
				board[i][j - 1] += temp[i][j] / 2;
				board[i - 1][j - 1] += temp[i][j] / 2;
				board[i + 1][j + 1] += temp[i][j] / 2;
				board[i - 1][j + 1] += temp[i][j] / 2;
				board[i + 1][j - 1] += temp[i][j] / 2;
			}
	}

	if (n >= 3) {
		memset(temp, 0, sizeof(temp));
		for (i = 2; i < 7; i++)
			for (j = 2; j < 7; j++) {
				board[i][j] *= 2;
				temp[i][j] = board[i][j];
			}
		for (i = 2; i < 7; i++)
			for (j = 2; j < 7; j++) {
				board[i - 1][j] += temp[i][j] / 2;
				board[i + 1][j] += temp[i][j] / 2;
				board[i][j + 1] += temp[i][j] / 2;
				board[i][j - 1] += temp[i][j] / 2;
				board[i - 1][j - 1] += temp[i][j] / 2;
				board[i + 1][j + 1] += temp[i][j] / 2;
				board[i - 1][j + 1] += temp[i][j] / 2;
				board[i + 1][j - 1] += temp[i][j] / 2;
			}
	}

	if (n >= 4) {
		memset(temp, 0, sizeof(temp));
		for (i = 1; i < 8; i++)
			for (j = 1; j < 8; j++) {
				board[i][j] *= 2;
				temp[i][j] = board[i][j];
			}
		for (i = 1; i < 8; i++)
			for (j = 1; j < 8; j++) {
				board[i - 1][j] += temp[i][j] / 2;
				board[i + 1][j] += temp[i][j] / 2;
				board[i][j + 1] += temp[i][j] / 2;
				board[i][j - 1] += temp[i][j] / 2;
				board[i - 1][j - 1] += temp[i][j] / 2;
				board[i + 1][j + 1] += temp[i][j] / 2;
				board[i - 1][j + 1] += temp[i][j] / 2;
				board[i + 1][j - 1] += temp[i][j] / 2;
			}
	}

	printBoard();
	return 0;
}

void printBoard() {
	int i, j;
	for (i = 0; i < 9; i++) {
		cout << board[i][0];
		for (j = 1; j < 9; j++)
			cout << " " << board[i][j];
		cout << endl;
	}
}
