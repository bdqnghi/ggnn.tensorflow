int main()

{
	char s[80],c,s1[80];
	int i=0,k;
	gets(s);
	while (s[i]!='\0')
	{
		if (s[i]<=90 && s[i]>=65) s[i]=s[i]+32;
		i++;
	}
	i=0;
	gets(s1);
	while (s1[i]!='\0')
	{
		if (s1[i]<=90 && s1[i]>=65) s1[i]=s1[i]+32;
		i++;
	}
	k=strcmp(s,s1);
	if (k==0) printf("=");
	if (k>0) printf(">");
	if (k<0) printf("<");
	
	return 0;
}



