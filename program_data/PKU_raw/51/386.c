int main()
{
	int n,i,j,l,max=0,t;
	char s[501];
	char son[500][5];
	int cnt[500]={0},rd[500];
	scanf("%d",&n);
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i+n-1<=l-1;i++)
	{
		for(j=i;j<=i+n-1;j++)
			son[i][j-i]=s[j];
		son[i][j-i]='\0';
	}
	for(i=0;i<=l-n+1;i++)
	{
		for(j=i;j<=l-n+1;j++)
			if(strcmp(son[i],son[j])==0)
				cnt[i]++;
		if(cnt[i]>max)
		{
			max=cnt[i];
			t=i;
		}
	}
	if(max==1)
		printf("NO\n");
	else
	{
		printf("%d\n",max);
		for(i=0;i<=l-n+1;i++)
			if(cnt[i]==cnt[t])
				printf("%s\n",son[i]);
	}
	return 0;
}