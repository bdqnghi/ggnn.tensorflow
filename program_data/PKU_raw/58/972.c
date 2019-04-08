int main()
{
	char s[100],f[100]={0};
	int i,n,l,j,b;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		b=0;
		gets(s);
		if(s[0]=='_'||s[0]>='a'&&s[0]<='z'||s[0]>='A'&&s[0]<='Z')
		{
			b=1;
			l=strlen(s);
			if(l>1)
			{
				for(j=1;j<l;j++)
				{
					if(!(s[j]=='_'||s[j]>='a'&&s[j]<='z'||s[j]>='A'&&s[j]<='Z'||s[j]>='0'&&s[j]<='9')) 
					{
					   b=0;
					   break;
					}
				}
			}
		}
		if(b==1) f[i]=1;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",f[i]);
	}
	return 0;
}