int a[100][100];
int zero(int);//????
void reduce(int);//????
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
				cin >> a[j][k];//????
				cout << zero(n) << endl;//?????????????
	}
	return 0;
}
int zero(int count)
{
	int i,j,sum=0;
	while (count >= 2)
	{
		for (i = 0; i < count; i++)
		{
			int min = a[i][0];
			for (j = 1; j < count; j++)
				if (a[i][j] < min)
					min = a[i][j];
			for (j = 0; j < count; j++)
				a[i][j] -= min;
		}//???
		for (i = 0; i < count; i++)
		{
			int min = a[0][i];
			for (j = 1; j < count; j++)
				if (a[j][i] < min)
					min = a[j][i];
			for (j = 0; j < count; j++)
				a[j][i] -= min;
		}//???
		sum += a[1][1];//??a[1][1]??
		reduce(count);//??
		count--;//????1
	}
	return sum;//????a[1][1]??
}
void reduce(int count)
{
	for (int i = 1; i < count - 1; i++)
	{
		a[0][i] = a[0][i + 1];
		a[i][0] = a[i + 1][0];
		for (int j = 1; j < count - 1; j++)
			a[i][j] = a[i + 1][j + 1];
	}
}