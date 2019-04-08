int main()
{
	int x1=0,y1=0,x2=0,y2=0;
	cin>>x1>>y1;
	int a[100][100]={(0)},b[100][100]={(0)},c[100][100]={(0)};
	int i=0,j=0;
	for(i=0;i<x1;i++)
		for(j=0;j<y1;j++)
			cin>>a[i][j];
	cin>>x2>>y2;
	for(int k=0;k<x2;k++)
		for(int l=0;l<y2;l++)
			cin>>b[k][l];
	for(int o=0;o<x1;o++)
		for(int p=0;p<y2;p++)
			for(int q=0;q<x2;q++)
				c[o][p]+=a[o][q]*b[q][p];
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
		{
			if(j!=y2-1)cout<<c[i][j]<<" ";
			else cout<<c[i][j]<<endl;
		}
	}cin.get();cin.get();cin.get();
	return 0;
}