void main()
{
	int n,i,j;
	char *p,*q;
	p=(char *)malloc(100*sizeof(char));
	q=(char *)malloc(100*sizeof(char));
	gets(p);
	n=strlen(p);
	for(i=0;i<=n-2;i++)
		*(q+i)=*(p+i)+*(p+i+1);
	*(q+n-1)=*(p+n-1)+*(p+0);
	*(q+n)='\0';
    puts(q);
}