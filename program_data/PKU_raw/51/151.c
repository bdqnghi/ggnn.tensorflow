void main()
{
	int i,j,n,m,k,time[500]={0},max=1,p;
	char a[500];
	scanf("%d",&n);
	scanf("%s",a);
	for(i=0;i<=(strlen(a)-n);i++)
	{
		for(k=i;k<=(strlen(a)-n);k++)
		{
			p=0;
			for(j=0;j<n;j++)
			{
				if(a[k+j]==a[i+j])
					p++;
			}
			if(p==n)
				time[i]++;
		}
	}
	
	for(i=0;i<=(strlen(a)-n);i++)
	{
		if(max<=time[i])
		{
			max=time[i];
		}
	}
	if(max<=1)
		printf("NO");
	else
	{	printf("%d\n",max);
		for(i=0;i<=(strlen(a)-n);i++)
		{ 
			if(time[i]==max)
			{
				for(j=0;j<n;j++)
				{
					printf("%c",a[i+j]);
				}
				printf("\n");
			}
		}
	}
}
