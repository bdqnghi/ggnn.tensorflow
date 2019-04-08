char s1[10000],s2[10000],s[10000];
int Len(char *s)
{
	int i;
	for(i=0;s[i];i++);
	return i;
}
int Match(char *s1,char *s2)
{
	int i,l=Len(s2);
	for(i=0;i<l;i++)
		if (s1[i]!=s2[i])
			return 0;
	return 1;
}
int Find(char *s,char *s1)
{
	int i,l=Len(s);
	for(i=0;i<l;i++)
		if (Match(s+i,s1))
			return i;
	return l;
}
int main()
{
	int l,i,t;
	scanf("%s%s%s",s,s1,s2);
	l=Len(s);
	t=Find(s,s1);
	if (t==l)
		printf("%s\n",s);
	else
	{
		for(i=0;i<t;i++)
			printf("%1c",s[i]);
		printf("%s",s2);
		for(i=Len(s1)+t;i<l;i++)
			printf("%1c",s[i]);
		printf("\n");
	}
	return 0;}	

