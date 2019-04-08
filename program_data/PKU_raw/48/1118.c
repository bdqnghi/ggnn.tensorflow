void change(int, int[][10]);
void print(int[][10]);
int m, n;

int main()
{
	int i, j, fb[10][10];
	cin >> m >> n;
	for(i = 1; i <= 9; i++)
		for(j = 1; j <= 9; j++)
			fb[i][j] = 0;
	fb[5][5] = m;
	change(1, fb);
	return 0;
}

void change(int day, int temp[][10])
{
	int i, j, t[10][10];
	if(day == n + 1)
	{
		print(temp);
		return;
	}
	for(i = 1; i <= 9; i++)
		for(j = 1; j <= 9; j++)
			t[i][j] = 0;
	for(i = 1; i <= 9; i++)
		for(j = 1; j <= 9; j++)
			if(temp[i][j] != 0)
			{
				t[i][j] = t[i][j] + temp[i][j];
				t[i + 1][j] = t[i + 1][j] + temp[i][j];
				t[i + 1][j + 1] = t[i + 1][j + 1] + temp[i][j];
				t[i + 1][j - 1] = t[i + 1][j - 1] + temp[i][j];
				t[i][j + 1] = t[i][j + 1] + temp[i][j];
				t[i][j - 1] = t[i][j - 1] + temp[i][j];
				t[i - 1][j] = t[i - 1][j] + temp[i][j];
				t[i - 1][j + 1] = t[i - 1][j + 1] + temp[i][j];
				t[i - 1][j - 1] = t[i - 1][j - 1] + temp[i][j];
			}
	for(i = 1; i <= 9; i++)
		for(j = 1; j <= 9; j++)
			temp[i][j] = temp[i][j] + t[i][j];
	change(day + 1, temp);
}

void print(int array[][10])
{
	int i = 1, j;
	while(1)
	{
		for(j = 1; j <= 8; j++)
			cout << array[i][j] << " ";
		cout << array[i][9] << endl;
		if(i == 9)
			break;
		i++;
	}
}