void main()
{
	char s[300];
	int a[26]={0};
	char c[26];
	int b,i,n=0;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			b=s[i]-'a';
			a[b]=a[b]+1;
		}
	}
    for(i=0;i<26;i++)
	{
		c[i]='a'+i;
		if(a[i]!=0)
		{
			n++;
			printf("%c=%d\n",c[i],a[i]);
		}
	}
	if(n==0) printf("No\n");

}
			
	