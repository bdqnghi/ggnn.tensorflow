int search(int a[][8],int m,int n)
{
	int i,j,k,x=0,y=0,max,sign;
	for(i=0;i<=m-1;i++)
	{
	
		for(j=0;j<=n-1;j++)
		{	max=a[i][0];
			
			if(max<a[i][j])
			{
				max=a[i][j];
				y=j;} 
		}
		for(k=0;k<=m-1;k++)
		{
			if(max>a[k][y])
			{
				x=-1;
			    break;
			}
			else
				x=i;
		}
        sign=10*x+y;
		if(sign>=0)return(sign);
	}
		return(-1);

}
main()
{
	int i,j,x,y,a[8][8],sign;
	scanf("%d,%d",&x,&y);
	for(i=0;i<=x-1;i++)
	{
		for(j=0;j<=y-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	sign=search(a,x,y);
	if(sign<0)
		printf("No");
	else
	{
	i=sign%10;
	j=(sign-i)/10;
	printf("%d+%d",j,i);}
	
}


