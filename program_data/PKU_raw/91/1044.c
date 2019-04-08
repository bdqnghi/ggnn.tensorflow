void main()
{
	int i;
	char a[100001],*p,e,l;
	gets(a);
	p=a;
	l=*p;
	for(i=0;i<strlen(a)-1;i++)
	{
		e=*(p+i);
		*(p+i)=e+*(p+i+1);
		printf("%c",*(p+i));
	}
	printf("%c",l+*(p+i));
}
