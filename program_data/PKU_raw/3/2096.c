int main(void)
{
	int n,k,i,j,s[1000];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&s[i]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if((s[i]+s[j])==k)
			{
				printf("yes\n");
				return 0;
			}
	printf("no\n");
	return 0;
}