int main()
{
	int n,i,j,len;
	char s[30],t;
	scanf("%d%c",&n,&t);
	for(i=0;i<n;i++)
	{
		gets(s);
		len=strlen(s);
		for(j=0;j<len;)
		{
			if(s[j]>='0' && s[j]<='9' || s[j]>='a' && s[j]<='z' || s[j]>='A' && s[j]<='Z' || s[j]=='_')
				j++;
			else
				break;
		}
		if(j==len)
		{
			if(s[0]>='0' && s[0]<='9')
				printf("no\n");
			else
				printf("yes\n");
		}
		else
			printf("no\n");
	}
	return 0;
}
		

