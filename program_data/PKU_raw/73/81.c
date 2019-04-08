
int main()
{
	int a[5][5];
	int i,j,max,min,lie=0,m=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<5;i++)
	{
		max=a[i][0];
		lie=0;
		for(j=0;j<5;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				lie=j;
			}
		}	
		min=a[0][lie];
		for(j=0;j<5;j++)
		{
			if(a[j][lie]<min)
			min=a[j][lie];
		}
		if(min==a[i][lie])
		{
			printf("%d %d %d\n",i+1,lie+1,a[i][lie]);
			m=1;
		}
	}
	if(m==0)
	printf("not found\n");
	
	return 0;
} 
