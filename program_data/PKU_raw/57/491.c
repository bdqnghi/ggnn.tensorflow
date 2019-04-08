int main()
{
	int n,i,a;
	char c[1];
	char ch[100];
	scanf("%d",&n);
	gets(c);
	for(i=1;i<=n;i++)
	{
		gets(ch);
		a=strlen(ch);
		if(ch[a-1]=='r'&&ch[a-2]=='e') 
		{ch[a-1]=0; ch[a-2]=0;}
		if(ch[a-1]==121&&ch[a-2]==108) 
		{ch[a-1]=0; ch[a-2]=0;}
		if(ch[a-1]=='g'&&ch[a-2]=='n'&&ch[a-3]=='i') 
		{ch[a-1]=0; ch[a-2]=0; ch[a-3]=0;}
		puts(ch);
	}
	return 0;
}