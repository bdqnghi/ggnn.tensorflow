int main()
{
	int m,n,i,j,k;
	
	scanf("%d %d",&m,&n);
	int a[9][9];
	int b[9][9];
	for(i=0;i<=8;i++)
	{
		for(j=0;j<=8;j++)
		{
			a[i][j]=0;
			b[i][j]=0;
		}
	}
	a[4][4]=m;
	for(k=1;k<=n;k++)
	{
    	for(i=5-k;i<=3+k;i++)
		{
    		for(j=5-k;j<=3+k;j++)
			{
		    	b[i][j]+=2*a[i][j];
				b[i-1][j-1]+=a[i][j];
				b[i-1][j]+=a[i][j];
				b[i-1][j+1]+=a[i][j];
				b[i][j-1]+=a[i][j];
				b[i][j+1]+=a[i][j];
				b[i+1][j-1]+=a[i][j];
				b[i+1][j]+=a[i][j];
				b[i+1][j+1]+=a[i][j];
			}
		}
		for(i=0;i<=8;i++)
		{
			for(j=0;j<=8;j++)
			{
				a[i][j]=b[i][j];
				b[i][j]=0;
			}
		}
	}
	for(i=0;i<=8;i++)
		{
			for(j=0;j<=8;j++)
			{
				printf("%d",a[i][j]);
				if(j<8) printf(" ");
			}
			if(i<8) printf("\n");
		}
	return 0;
}
