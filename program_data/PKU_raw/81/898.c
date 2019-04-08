int f(int array[][5],int m,int n)
{	
	int temp,k;
	if(0<=m&&m<=4&&0<=n&&n<=4)
	{
		for(k=0;k<5;k++)
		{
			temp=*(*(array+m)+k);
			*(*(array+m)+k)=*(*(array+n)+k);
			*(*(array+n)+k)=temp;
		}
		return 1;
	}
	else
		return 0;
}

void main()
{
	int m,n,i,j;
	int a[5][5];
	for(i=0;i<5;i++)
	{	for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&m,&n);
	if (f(a,m,n)==1)
	{
		for(i=0;i<5;i++)
		{
			printf("%d",a[i][0]);
			for(j=1;j<5;j++)
			{
				printf(" %d",a[i][j]);
			}
			printf("\n");
		}
	}
	else if(f(a,m,n)==0)
		printf("error");
}