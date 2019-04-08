int main()
{
	int x1=0;
	int y1=0;
	int x2=0;
	int y2=0;
	int a[100][100]={0};
	int b[100][100]={0};
	int c[100][100]={0};
	cin >>x1>>y1;
	int i=0,j=0;
	for (i=0;i<x1;i++)
	{
		for(j=0;j<y1;j++)
		{
			cin >>a[i][j];
		}
	}
	cin >>x2>>y2;
	for (i=0;i<x2;i++)
	{
		for(j=0;j<y2;j++)
			cin >>b[i][j];
	}
	int m=0;
	for(i=0;i<x1;i++)
	{
		for (j=0;j<y2;j++)
		{
			c[i][j]=a[i][j]-a[i][j];
			for(m=0;m<y1;m++)
				c[i][j]=c[i][j]+a[i][m]*b[m][j];
		}
	}
	for (i=0;i<x1;i++)
	{
		for (j=0;j<y2-1;j++)
		{
			cout <<c[i][j]<<" ";
		}
		cout <<c[i][y2-1]<<endl;
	}
return 0;
}