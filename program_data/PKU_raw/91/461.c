int main()
{
	char a[150]={'\0'};
	char c,b;
	char *p;
	int i,j,n;
	p=a;
	gets(a);
	n=strlen(a);
	b=*p;
	for(i=0;i<n-1;i++)
	{
		c=*(p+i+1);
		*(p+i)=*(i+p)+c;
	}
	*(p+n-1)=b+*(p+n-1);
	for(i=0;i<n;i++)
	{
		printf("%c",*(p+i));
	}
}
	


	