void main()
{
	int n, i, j, s[20001];
	scanf("%d", &n);

	for(i=1; i<=n; i++) scanf("%d", &s[i]);
	printf("%d", s[1]);
	for(i=2; i<=n; i++)
	{
		for(j=1; j<i; j++)
		{
			if (s[i]==s[j]) {s[i]=0;break;};//????????????????????????
		};
	};
	
	for(i=2; i<=n; i++)
	{
		if (s[i]!=0) printf(" %d", s[i]);//?????
	};	
}