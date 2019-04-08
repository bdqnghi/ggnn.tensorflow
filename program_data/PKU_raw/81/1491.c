void main()
{
	int a[5][5],b,c,i,t,j,n,m,e[5][5];
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    scanf("%d %d",&n,&m);
	b=pan(n,m);
	if(b==0)
		printf("error");
	if(b==1)
	{
		for(j=0;j<=4;j++)
		{
			e[n][j]=a[n][j];
			e[m][j]=a[m][j];
			a[n][j]=e[m][j];
			a[m][j]=e[n][j];
		}

    for(i=0;i<=4;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("%d\n",a[i][4]);
	}
	}
}
		

int pan(int n,int m)
	{
		int c,t;
		if(n!=m&&n>=0&&n<=4&&m>=0&&m<=4)
		{ c=1;
			t=m;
			m=n;
			n=t;}
	    else
			c=0;
		return(c);
	}
	

