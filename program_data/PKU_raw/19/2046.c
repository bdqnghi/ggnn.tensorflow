int main()
{
	char s[200],a[200],b[200],m[100][100];
	int len,n,i,j,hang=0,lie=0;
	gets(s);
	gets(a);
	gets(b);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]==' ')
		{
			m[hang][lie]='\0';
			hang++;
			lie=0;
		}
		else
		{
			m[hang][lie]=s[i];
			lie++;
		}
		if(s[i+1]=='\0')
		{
			m[hang][lie]='\0';
			break;
		}
	}
	for(i=0;i<=hang;i++)
	{
		if(strcmp(a,m[i])==0)
		{
			strcpy(m[i],b);
		}
	}
	for(i=0;i<hang;i++)
		printf("%s ",m[i]);
	printf("%s",m[hang]);
	return 0;
}