
int main()
{
	int a[5][5];
	int m,n,i,j,k,e;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	scanf("%d %d",&m,&n);
	if(m>=0&&m<5&&n>=0&&n<5)
	{
		for(k=0;k<5;k++)
		{
			e=a[m][k];
			a[m][k]=a[n][k];
			a[n][k]=e;
		}
	
     for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j==0)
			{printf("%d",a[i][j]);}
			if(j>0&&j<4)
			{printf(" %d",a[i][j]);}
			if(j==4)
			{printf(" %d\n",a[i][j]);}
		}
		
	}
	}
	else printf("error");



	return 0;
}
