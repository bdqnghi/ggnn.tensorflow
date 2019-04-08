int main()
{
	int n,i,j,len,a;
	char s[21];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a=0;
		scanf("%s",&s);
		len=strlen(s);
		for(j=0;j<len;j++)
		{
			if((s[j]=='_')||(s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9'&&j>0))
			{
				a++;
			}
		}
		if(a<len)
		{
			printf("no\n");
		}
		if(a==len)
		{
			printf("yes\n");
		}
	}
	return 0;
}
