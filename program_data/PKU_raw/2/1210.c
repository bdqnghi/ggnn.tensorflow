int main()
{
	int i,j,temp=26,n,p[27]={0};
	struct {
		int a;
		char s[30];
	}t[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&t[i].a,t[i].s);
		for(j=0;j<strlen(t[i].s);j++)
		{
			p[t[i].s[j]-'A']++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(p[i]>p[temp])
			temp=i;
	}
	printf("%c\n%d\n",temp+'A',p[temp]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<strlen(t[i].s);j++)
		{
			if(t[i].s[j]==temp+'A')
			{
				printf("%d\n",t[i].a);
				break;
			}
		}
	}
	return 0;
}