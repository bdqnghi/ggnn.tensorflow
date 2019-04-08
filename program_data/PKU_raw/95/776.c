void ast(char s[])
{
	int n,i;
	n=strlen(s);
	for(i=0;i<n;i++)
		if(s[i]>='a'&&s[i]<='z')
			s[i]=s[i]-32;
}
void main()
{
	char s1[50],s2[50];
	gets(s1);
	gets(s2);
	ast(s1);
	ast(s2);
	if(strcmp(s1,s2)>0)
		printf(">");
	else if(strcmp(s1,s2)<0)
		printf("<");
	else printf("=");
}