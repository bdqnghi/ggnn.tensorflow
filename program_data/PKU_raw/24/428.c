int check(char c)
{
	if(c<='z'&&c>='a')return 0;
	if(c<='Z'&&c>='A')return 0;
	if(c=='\'')return 0;
	return 1;
}
void main()
{
	int check(char c);
	int i=0,j=0,l=0,max=0,min=0,jmax=0,jmin=0;
	char *p;
	char a[100];
	char b[100][30];
	gets(a);

	p=a;
	while(*p)
	{
		while(*p!='\0'&&check(*p))
			p++;

		if(*p=='\0') break;
		sscanf(p,"%[A-Z'a-z]",b[i]);
		p+=strlen(b[i]);
		i++;
	}
	max=strlen(b[0]);
	min=strlen(b[0]);
	for(j=0;j<i;j++)
	{
		l=strlen(b[j]);
		if(l>max) {max=l;jmax=j;}
		else if(l<min) {min=l;jmin=j;}
	}
	
	printf("%s\n%s\n",b[jmax],b[jmin]);
}
	