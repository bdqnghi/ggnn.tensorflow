int max(int array[5][5],int n)
{
	int t=array[n][0],i;
	for(i=0;i<5;i++)
	{
		if(t<array[n][i])
		t=array[n][i];
		else;
	}
	return t;
}
int min(int array[5][5],int n)
{
	int t=array[0][n],i;
	for(i=0;i<5;i++)
	{
		if(t>array[i][n])
		t=array[i][n];
		else;
	}
	return t;
}
int main()
{
	int max(int array[5][5],int x);
	int min(int array[5][5],int x);
	int a[5][5],i,j,t,count=0,andian;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(t=0;t<5;t++)
	{
		andian=max(a,t);
		for(i=0;i<5;i++)
		{
			if(andian==min(a,i))
			{
				printf("%d %d %d\n",t+1,i+1,andian);
				break;
			}
			else
			count++;
		}
	}
	if(count==25)
	printf("not found\n");
	
	return 0;
} 