int main()
{
int x1,y1;
int x2,y2;
int num1[100][100];
int num2[100][100];
int num[100][100];
cin>>x1>>y1;
for (int i=0;i<=x1-1;i++)
{
	for (int j=0;j<=y1-1;j++)
	{
		cin>>num1[i][j];
	}
}
cin>>x2>>y2;
for (int i=0;i<=x2-1;i++)
{
	for (int j=0;j<=y2-1;j++)
	{
		cin>>num2[i][j];
	}
}
for (int i=0;i<=x1-1;i++)
{
	int p=0;
	for (int j=0;j<=y2-1;j++)
	{
		num[i][j]=0;
		for (int a=0;a<=y1-1;a++)
		{
			num[i][j]+=(num1[i][a]*num2[a][j]);
		}
		if (p>=1)
		{
			cout<<" ";
		}
		cout<<num[i][j];
		p++;

	}
	cout<<endl;
}

}
