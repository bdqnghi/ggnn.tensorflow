void count (char s[])
{
	int a[26]={0};
	int i,t=0,k=0,b;
	b=0;
	for (i=0;s[i]!=0;i++)
		if ((s[i]>=97)&&(s[i]<=122))
		{
			if (b==0) b=1;
			a[s[i]-97]=a[s[i]-97]+1;
		}
	if (b==0) printf("No\n");
	else for (i=0;i<26;i++)
		if (a[i]) printf("%c=%d\n",i+97,a[i]);
}

void main()
{
	char s[300]={0};
	scanf("%s",s);
	count(s);
}