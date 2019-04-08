void main()
{
	int i;
	char *s,*c;
	s=(char *)malloc(sizeof(char)*105);
	c=(char *)malloc(sizeof(char)*105);
	gets(s);
	for(i=0;*(s+i+1)!='\0';i++)
	{
		*(c+i)=*(s+i)+*(s+i+1);
	}
	*(c+i)=*(s+i)+*s;
	*(c+i+1)='\0';
	puts(c);
}
