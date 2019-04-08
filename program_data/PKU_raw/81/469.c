int a[5][5];
int change(int m,int n)
{        
         int i,j,t;
	if(n>=5||m>=5)
		return(0);
	else 
	{
		for(j=0;j<5;j++)
		{
			t=a[m][j];
			a[m][j]=a[n][j];
			a[n][j]=t;
		}
		return(1);
	}
}

void main()
{
         int m,n;
         int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&n,&m);
	if(change(m,n)==0)
		printf("error\n");
	else 
	{
		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
			{
                           if(j<4)
			 printf("%d ",a[i][j]);
		     if(j==4)
				 printf("%d\n",a[i][j]);
		}
	}
}
