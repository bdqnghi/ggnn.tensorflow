char change(char a)
{
	if(a>='a'&&a<='z') a=a-'a'+'A';
	return a;
}
int main()
{
	int len1,len2;
	int a,b,c=0;
	char s1[85],s2[85];
	gets(s1);
	gets(s2);
	len1=strlen(s1);
	len2=strlen(s2);
	for(b=0;b<len1;b++)
	{
		s1[b]=change(s1[b]);
	}
	for(b=0;b<len2;b++)
	{
		s2[b]=change(s2[b]);
	}
	for(b=0;b<len1&&b<len2;b++)
	{
		if(s1[b]>s2[b]) 
		{
			printf(">");
			c=1;
			break;
		}
		else if(s1[b]<s2[b])
		{
			printf("<");
			c=1;
			break;
		}
	}
	if(c==0) printf("=");
}
	
