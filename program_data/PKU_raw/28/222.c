int check (char c)
{
	int r;
	if(c!=' ') r=0;
	else r=1;
	return r;
}

void main()
{
	int check( char c);
	char *p;
	char a[1024];
	char word[100][100];
	int i=0,j=0,k;
	gets(a);
	p=a;
	while(*p)
	{
		while(check(*p)&&p!='\0')
			p++;
		if(*p=='\0') break;
		sscanf(p,"%[!-?0-9:-@A-Za-z']",word[i]);//??????????
		for(j=0;word[i][j]!='\0';j++);//word??????
		p+=j;
		i++;
		
	}
	for(j=0;word[0][j]!='\0';j++);//j????
	   printf("%d",j);
	for(k=1;k<i;k++)
	{
		for(j=0;word[k][j]!='\0';j++);
		printf(",%d",j);
	}

	

}
