void swap(int *a,int *b);
int main(int argc, char* argv[])
{
	int sz[5][5],i=0,j=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&sz[i][j]);
	}
	int n=0,m=0;
	scanf("%d%d",&n,&m);
	if(n>=0&&n<=4&&m>=0&&m<=4)
	{
		for(j=0;j<5;j++)
		{
			swap(&sz[n][j],&sz[m][j]);
		}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j<4)
			{
				printf("%d ",sz[i][j]);
			}
			else printf("%d",sz[i][j]);
		}
		if(i<4)
		{
			printf("\n");
		}
	}
	}
	else printf("error");
	return 0;
}
void swap(int *a,int *b)
{
	int e;
	e=*a;
	*a=*b;
	*b=e;
}