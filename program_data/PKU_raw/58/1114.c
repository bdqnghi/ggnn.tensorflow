int why(char *s)
{
	int i;
	if(s[0]=='_' || (s[0]>='a' && s[0]<='z') || (s[0]>='A' && s[0]<='Z'))
		for(i=1;s[i];i++)
			if(s[i]=='_' || (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
				continue;
			else
				return 0;
	else
		return 0;
	return 1;
}
int main()
{
	char s[1000];
	int n,i;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(s);
		printf("%d\n",why(s));
	}
	return 0;
}