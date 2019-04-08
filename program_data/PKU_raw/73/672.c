

int main()
{
	int a[5][5];
	int flag[5][5];
	for (int i=0;i<5;i++)
		for (int j=0;j<5;j++)
		{
			cin>>a[i][j];
			flag[i][j]=0;
		}
	for (int i=0;i<5;i++)
	{
		int max=0;
		for (int j=1;j<5;j++)
			if (a[i][max]<a[i][j]) max=j;
		flag[i][max]++;
	}
	for (int j=0;j<5;j++)
	{
		int min=0;
		for (int i=1;i<5;i++)
			if (a[min][j]>a[i][j]) min=i;
		flag[min][j]++;
	}
	for (int i=0;i<5;i++)
		for (int j=0;j<5;j++)
			if (flag[i][j]==2) 
			{
				cout<<i+1<<' '<<j+1<<' '<<a[i][j];
				return 0;
			}
	cout<<"not found";
	return 0;
}