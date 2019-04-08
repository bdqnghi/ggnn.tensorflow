int main()
{
	int n,m[20000],i,j=0,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
		for(j=0;j<i;j++)
		{
			if(m[i]==m[j])
				break;
		}
		if(i==j)
		{
			if(count==0)
			{
				printf("%d",m[i]);
				count++;
			}
			else
				printf(" %d",m[i]);
		}
	}
	printf("\n");
	return 0;
}