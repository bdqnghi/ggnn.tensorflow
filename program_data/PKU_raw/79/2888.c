int main()
{
	int n[10000] = {1},m[10000] = {1},win[10000],i,s=0;
	int a, b;
	for(i=1;n[i - 1]!=0&&m[i - 1]!=0;i++)
		scanf("%d%d",&n[i],&m[i]);
	i --;
	for(a=1;a<i;a++)
	{
		s = 0;
		for(b=2;b<=n[a];b++)
		{
			s=(s+m[a])%b;
		}
		win[a]=s+1;
	}
	for(int c=1;c<i;c++)
	{
		printf("%d\n",win[c]);
	}
	return 0;
}
