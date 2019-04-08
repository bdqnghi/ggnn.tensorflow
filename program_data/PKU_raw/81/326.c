
int func(int a[5][5],int m,int n)
{
	if(m>4||n>4)
		return 0;

	else
	{
		int b[5],i;
		for(i=0;i<5;i++)
		{
			b[i]=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=b[i];
		}
		return 1;
	}
}

void main()
{
	int a[5][5],i,j,m,n,c;
	for(i=0;i<5;i++)
	{	for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	}
	scanf("%d%d",&m,&n);

	c=func(a,m,n);
	if(c==0)
		printf("error");
	if(c==1)
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("%d",a[i][j]);
				if(j<4)
					printf(" ");
			}
			printf("\n");
		}
	}
}
