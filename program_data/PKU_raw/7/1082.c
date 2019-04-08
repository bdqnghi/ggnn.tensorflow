
int Issubstr(char *s,char *subs)
{
	int i,j;
	for (i=0;i<strlen(s);i++)
	{
		for (j=0;j<strlen(subs);j++)
		{
			if(subs[j]!=s[i+j]) break;
		}
		if(j==strlen(subs)) break;
	}
	if(i<strlen(s)) return i;
	return -1;
}
int main()
{
	char s[257],sub[257],replace[257];
	int i,j=0;
	scanf("%s%s%s",s,sub,replace);
	for (i=Issubstr(s,sub);i!=-1&&j<strlen(replace);i++)
	{
		s[i]=replace[j++];
	}
	if(i>strlen(s)) s[i]='\0';
	printf("%s",s);
	return 0;
}