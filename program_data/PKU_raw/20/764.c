void insert(char s1[],char s2[])
{
	int i,k=0,j,l;
	char s[13];
	l=strlen(s1);
	for(i=1;i<l;i++)
		if(s1[i]>s1[k])
			k=i;
	for(i=0;i<=k;i++)
		s[i]=s1[i];
	for(j=0;j<3;j++)
		s[i+j]=s2[j];
	for(j=i;j<l;j++)
		s[j+3]=s1[j];
	s[j+3]='\0';
	printf("%s\n",s);
}
void main()
{
	char s1[11],s2[4];
	while(scanf("%s%s",s1,s2)!=EOF)
		insert(s1,s2);
}