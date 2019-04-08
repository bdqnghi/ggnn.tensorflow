int sum = 0, n, t = 1;
char room[101][101];
void F(int x, int y) {
	if (x - 1 >= 0) {
		if (room[x - 1][y] == 0) {
			sum++;
			room[x - 1][y] = t + 1;
		}
	}
	if (y - 1 >= 0) {
		if (room[x][y - 1] == 0) {
			sum++;
			room[x][y - 1] = t + 1;
		}
	}
	if (x + 1 < n) {
		if (room[x + 1][y] == 0) {
			sum++;
			room[x + 1][y] = t + 1;
		}
	}
	if (y + 1 < n) {
		if (room[x][y + 1] == 0) {
			sum++;
			room[x][y + 1] = t + 1;
		}
	}
}
int main() {
	int i, j, m;
	cin >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) {
			cin >> room[i][j];
			switch (room[i][j]) {
			case '@' : room[i][j] = 1; sum++; break;
			case '.' : room[i][j] = 0; break;
			case '#' : room[i][j] = -1; break;
			}
		}
	cin >> m;
	while (t < m) {
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++) {
				if (room[i][j] == t)
					F(i, j);
			}
		t++;
	}
	cout << sum << endl;
	return 0;
}
