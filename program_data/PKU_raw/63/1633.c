int main()
{
	int x1,y1,x2,y2,a[100][100],b[100][100],c[100][100];
	cin>>x1>>y1;
	for (int i=0;i<x1;i++)
	{
		for (int j=0;j<y1;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>x2>>y2;
	for (int k=0;k<x2;k++)
	{
		for (int l=0;l<y2;l++)
		{
			cin>>b[k][l];
		}
	}
	for (int p=0;p<x1;p++)
	{
		for (int q=0;q<y2;q++)
		{
			c[p][q]=0;
			for (int o=0;o<y1;o++)
			{
				c[p][q]+=a[p][o]*b[o][q];
			}
		}
	}
	for (int u=0;u<x1;u++)
	{
		for (int m=0;m<y2-1;m++)
		{
			cout<<c[u][m]<<" ";
		}
		cout<<c[u][y2-1]<<endl;
	}
	return 0;
}

