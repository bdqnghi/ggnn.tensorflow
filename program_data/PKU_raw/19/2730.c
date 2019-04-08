
int main()
{
	unsigned int i=0,j=0;
	char s[101];
	char a[101];
	char b[101];
	char tmp[101];
	gets(s);
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!=' ')
		{
			tmp[j]=s[i];
			j++;
		}
		else
		{
			tmp[j]='\0';
			j=0;
			if(strcmp(tmp,a)==0)
				printf("%s ",b);
			else
				printf("%s ",tmp);
		}
	}
	tmp[j]='\0';
	if(strcmp(tmp,a)==0)
		printf("%s\n",b);
	else
		printf("%s\n",tmp);
	return 0;
}