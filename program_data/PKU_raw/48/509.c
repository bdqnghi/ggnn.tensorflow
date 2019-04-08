
int m, n;

int main()
{
	int produce(int x, int y, int n);
	cin >> m >> n;
	for(int i = 1; i <= 9; i ++)
	{
		cout << produce(i, 1, n);
		for (int j = 2; j <= 9; j ++)
			cout << " " << produce(i, j, n);
		cout << endl;
	}
	return 0;	
}

int produce(int x, int y, int day)
{
	if(x == 0 || y == 0 || x == 10|| y == 10) return 0;
	else if(day == 0)
	{
		if(x == 5 && y == 5) return m;
		else return 0;
	}
	else return
		(produce(x - 1, y, day - 1) + produce(x + 1, y, day - 1)
		+ produce(x, y - 1, day - 1) + produce(x, y + 1, day - 1)+
		produce(x, y , day - 1) * 2) + produce(x - 1, y - 1, day - 1)
		+ produce(x - 1, y + 1, day - 1) + produce(x + 1, y - 1, day - 1)
		+ produce(x + 1, y + 1, day - 1);
}