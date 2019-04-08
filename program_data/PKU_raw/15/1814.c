int main()
{
	int SZ[100][100];
	int n,m1,n1,m2,n2,mj;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&SZ[i][j]);
		}
	}
    for(int p=0;p<n;p++)
	{
		for(int q=0;q<n;q++)
		{
			if (SZ[p][q]==0)
			{   
				n1=p;
				m1=q;
				goto sen1;
			}
		}
		
    }
	sen1:for(int x=n-1;x>=0;x--)
	{
		for(int y=n-1;y>=0;y--)
		{
			if(SZ[x][y]==0)
			{
				n2=x;
			    m2=y;
			goto sen2;
			}
		}
		
	}
	sen2:	mj=(m2-m1-1)*(n2-n1-1);
		printf("%d",mj);
	return 0;
}