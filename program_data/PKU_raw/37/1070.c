int main()
{
	char s[100000];
	int c[26]={0};
	int i,l,t,j,b;
	scanf("%d",&t);
	getchar();
	for(i=0;i<t;i++)
	{
		b=0;
		gets(s);
		l=strlen(s);
		for(j=0;j<l;j++)
		{
		   c[s[j]-'a']++;
		}
		for(j=0;j<l;j++)
		{
			if(c[s[j]-'a']==1)
			{
				printf("%c\n",s[j]);
				b=1;
				break;
			}
		}
	    memset(c,0,sizeof(c));	
	    if(b!=1) printf("no\n");
	}
	return 0;
	//???????? 
}