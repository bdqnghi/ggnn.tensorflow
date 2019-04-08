void main()
{
	int n;
	char a[300],b,*p;
	gets(a);
	n=strlen(a);
	b=*a;
	for(p=a;*(p+1)!='\0';p++)
		*p=*p+*(p+1);
	*p+=b;
	puts(a);
}


