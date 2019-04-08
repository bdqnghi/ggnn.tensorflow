cha(char c[],char d[])
{
	char *p,*a;
	char b[1000] = {'\0'};
	int i = 0;
	char k;
	p = c;
	k = *p;
	for (p = c + 1; *p != '\0';p++)
	{
		if (*p > k)
		{
			k = *p;
			a = p;
		}
	}
	p = a+1;
	for (;*p!='\0';p++)
	{
		b[i++] = *p;
		*p = '\0';
	}
	strcat(c,d);
	strcat(c,b);
}
main()
{
	char c[1000] = {'\0'},d[10] = {'\0'},e[5] = {'\0'};
	while (scanf("%s%s",c,d) != EOF)
	{
		cha(c,d);
	    printf("%s\n",c);
		strcpy(c,e);strcpy(d,e);
	}
}

