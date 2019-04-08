int main()
{
	int x,i,j,a[40][40];
	scanf("%d",i);
	for(i=1;i<x;i++)
	{
		a[i][i]=1;
		a[i][1]=1;
	}
	for(i=3;i<x;i++)
	{
	   for(j=2;j<=i-1;j++)
	   {
		 a[i][j]=a[i-1][j-1]+a[i-1][j];
	   }
	}
 for(i=1;i<x;i++)
	{
    	for(j=1;j<i;j++)
		{
	    	printf("%6d",a[i][j]);
		}
		printf("\n");
	}
printf("\n");
return 0;
}

