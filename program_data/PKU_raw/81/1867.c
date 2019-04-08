
int main(int argc, char* argv[])
{
	int n,m,i,j;
	int a[5][5];

	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&n,&m);

	if(n<5&&n>=0&&m<5&&m>=0)
	{
		for(i=0;i<n;i++)
		{
			printf("%d",a[i][0]);
			for(j=1;j<5;j++)
				printf(" %d",a[i][j]);
			printf("\n");
		}
		printf("%d",a[m][0]);
		for(j=1;j<5;j++)
			printf(" %d",a[m][j]);
		printf("\n");
		for(i=n+1;i<m;i++)
		{
			printf("%d",a[i][0]);
			for(j=1;j<5;j++)
				printf(" %d",a[i][j]);
			printf("\n");
		}
		printf("%d",a[n][0]);
		for(j=1;j<5;j++)
			printf(" %d",a[n][j]);
		printf("\n");
		for(i=m+1;i<5;i++)
		{
			printf("%d",a[i][0]);
			for(j=1;j<5;j++)
				printf(" %d",a[i][j]);
			printf("\n");
		}
	}
	else
		printf("error\n");	
	
	return 0;
}