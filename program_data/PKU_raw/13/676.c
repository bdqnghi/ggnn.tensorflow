void main()
{
	int n,i,j,s[20000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&s[i]);
	for(i=0;i<n;i++)
		for(j=0;j<i;j++)
		{
			if(s[j]==s[i])
				s[i]=0;
		}
		printf("%d",s[0]);
		for(i=1;i<n;i++)
		{
			if(s[i]!=0)
				printf(" %d",s[i]);
		}
		printf("\n");
}