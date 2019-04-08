
int cell[15][15] = {0};

void change()
{
	int cell2[15][15] = {0};
	for(int i = 1; i <= 9; i++)
		for(int j = 1; j<= 9; j++)
		{
			if(cell[i][j] != 0)
			{
				int k = cell[i][j] * 2;
				cell2[i][j] += k;
				cell2[i - 1][j] += cell[i][j];
				cell2[i + 1][j] += cell[i][j];
				cell2[i][j + 1] += cell[i][j];
				cell2[i][j - 1] += cell[i][j];
				cell2[i - 1][j - 1] += cell[i][j];
				cell2[i + 1][j - 1] += cell[i][j];
				cell2[i - 1][j + 1] += cell[i][j];
				cell2[i + 1][j + 1] += cell[i][j];
			}
		}
	for(int i = 1; i <= 9; i++)
		for(int j = 1; j <= 9; j++)
			cell[i][j] = cell2[i][j];
}
int main() {
	
	int m = 0, n = 0;
	cin >> m >> n;
	cell[5][5] = m;
	for(int i = 0; i < n; i++)
	    change();
	for(int i = 1; i <= 9; i++){
		for(int j = 1; j < 9; j++) 
			cout << cell[i][j] << ' ';
		cout << cell[i][9] << endl;
		
	}

	return 0;
}