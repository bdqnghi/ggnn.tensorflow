void main()
{
	char s[100],*p;
	int i,j,l;
	gets(s);
	l=strlen(s);
	for(i=l-1;i>=0;i--)
		s[i+1]=s[i];
	s[0]=s[l+1]=' ';
	p=s;

	for(i=l;i>=0;i--)
		if(*(p+i)==' ')
		{
			for(j=i+1;*(p+j)!=' ';j++)
				printf("%c",*(p+j));
			if(i!='\0')
				printf(" ");
		}

		
}
