void main()
{
	char a[100][100];
	char str[100];
	int c=0,i,t=0;
	gets(str);
	for(i=0;i<=strlen(str);i++)
	{
		if (str[i]!=' ')
		{
			a[c][t]=str[i];
			t+=1;
		}
		else
		{
			a[c][i]='\0';
			c+=1;
			t=0;
		}
	}
	
	while (c>0)
	{
		i=0;
		while (a[c][i]!='\0')
		{
			printf("%c",a[c][i]);
			i+=1;
		}
        printf(" ");
		c-=1;
	}
	i=0;
	while (a[0][i]!='\0')
	{
		printf("%c",a[0][i]);
		i+=1;
	}
}


