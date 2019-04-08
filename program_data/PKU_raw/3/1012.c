int main()
{
	int sz[1001];
	int n, i, j, k, m;
	m=0;
	scanf("%d", &n);
	scanf("%d", &k);
	for(i=0;i<n;i++)
	{
		scanf("%d", &(sz[i]));
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sz[i]+sz[j]==k)
			{
				m=1;
				printf("yes");
				break;
			}
			
		}
		if(m==1)
			break;
	}
	if(m==0)
		printf("no");
	return 0;
}


