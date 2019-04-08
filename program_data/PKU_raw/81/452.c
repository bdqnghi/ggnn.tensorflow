void main()
{
	int judge(int m,int n);
	int a[5][5],m,n,i,j,k,t,leap;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&m,&n);
	leap=judge(m,n);
	if(leap==0)
	{
		printf("error");
	}
	if(leap==1)
	{
		for(k=0;k<5;k++)
		{
			t=a[n][k];
			a[n][k]=a[m][k];
			a[m][k]=t;
		}
	    for(i=0;i<5;i++)
		{
		    for(j=0;j<5;j++)
			{
			    if(j==0)
				{
				    printf("%d",a[i][j]);
				}
				if(j!=0)
				{
				    printf(" %d",a[i][j]);
				}
				if(j%4==0&&j!=0)
				{
					printf("\n");
				}
			}
		}
	}
}
    int judge(int m,int n)
	{
		int leap;
		if(m>=0&&m<5&&n>=0&&n<5)
		{
			leap=1;
		}
		else
		{
			leap=0;
		}
		return(leap);
	}