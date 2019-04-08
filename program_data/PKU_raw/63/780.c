int main()
{
	int x1,y1,x2,y2,i,j,k,l;
	int a[100][100],b[100][100],c[100][100];
    cin>>x1>>y1;
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y1;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>x2>>y2;
	for(k=0;k<x2;k++)
	{
		for(l=0;l<y2;l++)
        {
			cin>>b[k][l];
		}
	}
	int x,y,z;
	for(x=0;x<x1;x++)
	{
		for(y=0;y<y2;y++)
		{
			c[x][y]=0;
			for(z=0;z<y1;z++)
			{
				c[x][y]+=a[x][z]*b[z][y];
			}
		}
	}
	int m,n;
	for(m=0;m<x1;m++)
	{
		for(n=0;n<y2-1;n++)
		{
			cout<<c[m][n]<<" ";
		}
		cout<<c[m][y2-1]<<endl;
	}
	return 0;
}
