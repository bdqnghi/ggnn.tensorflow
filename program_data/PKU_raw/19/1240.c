void main()
{
	char *str,*s1,*s2,*t,*str2;
	int n;
	str = (char *)calloc(102,LEN);
	s1  = (char *)calloc(102,LEN);
	s2  = (char *)calloc(102,LEN);
	t   = (char *)calloc(102,LEN);
	str2= (char *)calloc(240,LEN);
	gets(str);
	scanf("%s%s",s1,s2);
	do 
	{
		sscanf(str,"%s",t);
		n=strlen(t);
		str = str + n+1;
		if (strcmp(t,s1)==0)
			strcat(str2,s2);
		else strcat(str2,t);
		if (*str!='\0')
		strcat(str2," ");
	}
	while (*str!='\0');
	printf("%s",str2);
}