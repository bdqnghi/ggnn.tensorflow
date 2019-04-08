
void main()
{
	char s[100];
	int i,k;
	gets(s);
	for (i=1,k=1;s[i]!='\0';i++,k++)
	{
		if (s[i]==' '&&s[i-1]==' ')
		{
			k--;
		}
		else s[k]=s[i];
	}
	s[k]='\0';
	printf("%s\n",s);
}