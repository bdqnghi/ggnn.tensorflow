int main()
{
	int a[5][5],max[5]={0},i,j,col[5],t=1;

	for (i=0; i < 5; i++)
	{
		for (j=0; j<5; j++)
		{
			cin >> a[i][j];

			if (a[i][j] > max[i])
			{
				max[i]=a[i][j];
				col[i]=j;
			}
		}
	}
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			if (a[j][col[i]]<max[i])
				break;
		}
		if (j==5)
		{
			cout << i+1 << ' ' << col[i]+1 << ' ' << max[i] << endl;
			t=0;
		}
	}
	if (t)
		cout << "not found" << endl;
	return 0;
}