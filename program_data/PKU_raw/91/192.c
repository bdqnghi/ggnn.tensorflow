void main()
{
	int i,j,k,l,m,n;
	char *p,*q;
	p=(char*)malloc(100*sizeof(char *));
	q=(char*)malloc(100*sizeof(char *));
	gets(p);
	l=strlen(p);
	for (i=0;i<l-1;i++)
	{
		*(q+i)=*(p+i)+*(p+i+1);
	}
	*(q+l-1)=*(p+l-1)+*p;
	*(q+l)='\0';
	puts(q);
}