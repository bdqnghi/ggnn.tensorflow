

int g[300];



int main()
{
	int n;
	scanf("%d",&n);

	int k = 0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",g+k);
		for(int j=0;j<k;j++)
		{
			if(g[j]==g[k])
			{
				k--;
				break;
			}
		}
		k++;
	}

	printf("%d",g[0]);
	for(int j=1;j<k;j++)
		printf(",%d",g[j]);

	return 0;
}