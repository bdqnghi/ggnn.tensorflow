int main()
{
	char s[101],a[101],b[101];
	char s1[101][101];
	int i,j,k;
	k=0;j=0;i=0;
	int tag=0;
	gets(s);
	gets(a);
	gets(b);
	while(s[i]!='\0')
	{
		s1[j][k]=s[i];
		k++;
		if(s[i]==' ')
		{
		   s1[j][k-1]='\0';
		   j++;
		   k=0;
		}
		i++;
	}
	s1[j][k]='\0';
	for(i=0;i<=j;i++)
	{
		if(strcmp(s1[i],a)==0)
			strcpy(s1[i],b);
	}
	for(i=0;i<j;i++)
	{
		printf("%s ",s1[i]);
	}
	printf("%s",s1[i]);
	return 0;
}