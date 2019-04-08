void deal(char s[])
{
	int i,j,p=0;
	for(i=0;i<strlen(s);i++)
	if(s[i]=='(')
	{
		for(j=i+1;j<strlen(s);j++)
		if(s[j]=='('||s[j]==')')
		break;
		if(s[j]==')')
		{
			s[j]='a';
			s[i]='a';
			p++;
		}
	}
	if(p!=0)
	deal(s);
}
int main()
{
	int i,j;
	char s[1000],s1[1000],t[1000];
	while(0==0)
	{
	for(i=0;i<1000;i++)
	s[i]=0;
	gets(s);
	if(s[0]=='\0') break;
	strcpy(s1,s);
	deal(s1);
	for(i=0;i<strlen(s);i++)
	if(s1[i]=='(') t[i]='$';
	else if(s1[i]==')') t[i]='?';
	else t[i]=' ';
	t[strlen(s)]='\0';
	printf("%s\n%s\n",s,t);
	}
	return 0;
}