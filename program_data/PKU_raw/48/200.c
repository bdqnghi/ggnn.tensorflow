int a[9][9],b[9][9];
int main()
{
	int m,n,i,j,k,x,y;
	cin>>m>>n;
	a[4][4]=m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<9;j++)
			for(k=0;k<9;k++)
			{
				b[j][k]=0;
	             for( x=j-1;x<=j+1;x++)
					 for( y=k-1;y<=k+1;y++)
						 if(x>=0&&x<9&&y>=0&&y<9)
							 b[j][k]+=a[x][y];
				 b[j][k]+=a[j][k];
			}
		for(j=0;j<9;j++)
			for(k=0;k<9;k++)
				a[j][k]=b[j][k];
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<8;j++)
			cout<<a[i][j]<<" ";
		cout<<a[i][j]<<endl;
	}
	return 0;
}
		

