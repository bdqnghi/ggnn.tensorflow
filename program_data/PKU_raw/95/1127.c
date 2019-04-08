int main()
{
	int i;
	char s1[80],s2[80];
	gets(s1);
	gets(s2);
	i=0;
	while(s1[i]!='\0'&&(s1[i]==s2[i]||(s1[i]<='Z'&&s1[i]>='A'&&s2[i]-s1[i]=='a'-'A')||(s2[i]<='Z'&&s2[i]>='A'&&s1[i]-s2[i]=='a'-'A')))
	{i++;}
	if((s1[i]>s2[i])||(s2[i]<='z'&&s2[i]>='a'&&s2[i]-s1[i]<'a'-'A')) printf(">");
	else if((s1[i]<s2[i])||(s1[i]<='z'&&s1[i]>='a'&&s1[i]-s2[i]<'a'-'A')) printf("<");
	else printf("=");
	return 0;

}