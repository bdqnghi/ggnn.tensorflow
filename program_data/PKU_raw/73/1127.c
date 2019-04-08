
int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	int i, j, k, column=-1;
	int arr[5][5];
	for (i = 0; i < 5; ++ i) for (j = 0; j < 5; ++ j) cin >> arr[i][j];
	for (i = 0; i < 5; ++ i)
	{
		for (j = 0; j < 5; ++ j)
		{
			for (k = j+1; k < 5; ++ k)
				if (arr[i][j] < arr[i][k]) break;
			if (k == 5)
			{
				column = j;
				break;
			}
		}
		for (j = 0; j < 5; ++ j)
			if (arr[i][column] > arr[j][column]) break;
		if (j == 5)
		{
			cout << i+1 << " " << column+1 << " " << arr[i][column] << endl;
			break;
		}
	}
	if (i == 5) cout << "not found\n";
}
