
int main(int argc, char* argv[])
{
	int sz[100];
	int m;
	int sum=0;
	scanf("%d",&m);
	int shuru[100];
	for(int i=0;i<m;i++)
	{
		scanf("%d",&(shuru[i]));
	}
	for(int h=0;h<m;h++)
	{
		
	for(int j=0;j<shuru[h];j++)
	{
		if(j<=1)
		{
			sz[j]=1;
		}
		if(j>=2)
		{
			sz[j]=sz[j-1]+sz[j-2];
		}
		sum=sz[j];
	}
	printf("%d\n",sum);

	}

	return 0;
}