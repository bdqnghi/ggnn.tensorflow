int a[5][5];
int gmm(int n,int m)
{
	int t,i;
	if(n>=0&&n<5&&m>=0&&m<5)
	{
		for(i=0;i<5;i++)
		{
		t=a[m][i];
		a[m][i]=a[n][i];
		a[n][i]=t;
		}

		return 1;
	}
	else
		return 0;
}
void main()
{

	int n,m,i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&n,&m);
	if(gmm(n,m)==0)
		printf("error\n");
	else
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("%d",a[i][j]);
				if(j!=4)
					printf(" ");
			}
			printf("\n");
		}
	}
}

