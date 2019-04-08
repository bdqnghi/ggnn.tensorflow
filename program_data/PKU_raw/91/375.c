void main()
{
	char c[100],a[100];
	int i,l,j=0,b[100];
	for(i=0;i<100;i++)
	{
		c[i]=0;
		a[i]=0;
    }
	gets(c);
	l=strlen(c);
	for(i=0;i<l-1;i++)
	{
		b[i]=c[i]+c[i+1];
		a[i]=b[i];
	}
	b[l-1]=c[0]+c[l-1];
	a[l-1]=b[l-1];
	for(i=0;i<l;i++)
	{
		printf("%c",a[i]);
	}
}