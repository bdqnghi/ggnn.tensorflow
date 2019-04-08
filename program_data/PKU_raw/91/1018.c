int main()
{
	int i,l,j=0;
	char s[101],s1[101];
	gets(s);
	l=strlen(s);
	s[l]='\0';
	for(i=0;s[i]!='\0';i++)
	{
		if(i==l-1)
		{
			s1[j]=s[i]+s[0];
		}
		else
		{
			s1[j]=s[i]+s[i+1];
		}
		j=j+1;
	}
	s1[l]='\0';
	printf("%s",s1);
	return 0;
}
		