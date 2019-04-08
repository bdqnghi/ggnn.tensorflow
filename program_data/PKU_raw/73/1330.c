
int main()
{
	int i,j,k,max,t,flag=1;
	int a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		max=0;
		for(j=0;j<5;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				t=j;
			}
		}
		for(k=0;k<5;k++)
		{
			if(a[k][t]<max)
			{
				break;
			}
		}
		if(k==5)
		{
			printf("%d %d %d",i+1,t+1,a[i][t]);
			flag=-1;
		}
	}
	if(flag==1)
	{
		printf("not found");
	}
	return 0;
}