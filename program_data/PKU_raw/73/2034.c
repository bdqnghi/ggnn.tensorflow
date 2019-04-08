int main()
{
	int a[5][5];
	int b[5][5];
	int max=0,min=100000;
	int p=0;
	for(int i=0;i<=4;i++)
		for(int j=0;j<=4;j++)
	cin >> a[i][j];
	memset(b,0,sizeof(b));
	for(int i=0;i<=4;i++)
	{
		max=0;
		for(int j=0;j<=4;j++)
			if(a[i][j]>max)
				max=a[i][j];
		for(int j=0;j<=4;j++)
			if(a[i][j]==max)
			{
				b[i][j]++;
				//cout <<"b"<<i<<j<<"="<<b[i][j];
			}
	}
	//cout << endl;
	for(int i=0;i<=4;i++)
	{
		min=100000;
		for(int j=0;j<=4;j++)
			if(a[j][i]<min)
				min=a[j][i];
		for(int j=0;j<=4;j++)
			if(a[j][i]==min)
			{
				b[j][i]++;
				//cout <<"b"<<j<<i<<"="<<b[j][i];
			}
	}
	for(int i=0;i<=4;i++)
		for(int j=0;j<=4;j++)
			if(b[i][j]==2)
			{
				cout << i+1 << " " << j+1 << " " <<a[i][j];
				p=1;
			}
	if(p==0)
		cout << "not found";
	return 0;
}
