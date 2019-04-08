int main()
{
	int i,j,t,p,a[6][6],max;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		p=0;
		max=a[i][0];
		t=0;
		for(j=1;j<5;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				t=j;
			}
		}
        for(j=0;j<5;j++)
		{
			if(max<=a[j][t])
			{
				p++;
			}
		}
		if(p==5)
		{
			printf("%d %d %d",i+1,t+1,max);
			printf("\n");
			break;
		}
	}
	if(i>=5)
		printf("not found");
	return 0;
}
	