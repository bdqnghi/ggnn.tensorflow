
void main()
{
	char s[101],t[101];
	char *p1,*p2;
	int i,len;

	gets(s);
	len=strlen(s);
    p1=s;
	p2=t;
	for(i=0;i<len-1;i++)
	{
		*(p2+i)=*(p1+i)+*(p1+1+i);
	}
	*(p2+i)=*(p1+i)+*p1;

	for(i=0;i<len;i++)
	{
	   printf("%c",*(p2+i));
	}
   
}

