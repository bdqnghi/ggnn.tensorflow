int change(int m,int n)
{
	if (n>=0&&n<=4&&m>=0&&m<=4)
		return(1);
	else return(0);
}

void main()
{
	int a[5][5];
	int n,m,i,j,p;
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&n,&m);
	if (change(m,n)==0)
		printf("error");
	else if (change(m,n)==1)
	{
		for (i=0;i<5;i++)
		{
		    p=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=p;
		}
		for (i=0;i<5;i++)
		    for (j=0;j<5;j++)
			{
				printf("%d",a[i][j]);
				if (j<4)
					printf(" ");
				if (i<4&&j==4)
					printf("\n");
			}
	}
}