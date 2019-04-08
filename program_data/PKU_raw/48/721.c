int main( )
{
	int m,n,i,j,p,q;
	int a[11][11]={0},b[11][11]={0};
	cin>>m>>n;
	a[5][5]=m;
	while(n>0)
	{
		n--;
		for(i=1;i<=9;i++)
		{
			for(j=1;j<=9;j++)
			{
				for(p=-1;p<=1;p++)
				{
					for(q=-1;q<=1;q++)
					{
						b[i+p][j+q]+=a[i][j];             //????????????????
					}
				}
			}
		}
		for(i=1;i<=9;i++)
		{
			for(j=1;j<=9;j++)
			{
				a[i][j]+=b[i][j];                //???
				b[i][j]=0;
			}
		}
	}
	for(i=1;i<=9;i++)
	{
		for(j=1;j<9;j++)
			cout<<a[i][j]<<" ";
		cout<<a[i][j]<<endl;
	}
	return 0;
}