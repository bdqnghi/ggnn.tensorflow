void main()
{
	int l,m,k=1,i=0,q,a[1000];
	char p[1000];
	gets(p);
	l=strlen(p);
	for(m=0;m<l;m++)
	{
		if(p[m]==' ')
		{
			a[k]=m+1;
			k++;
		}
	}
	a[0]=0;
	a[k]=l+1;
	for(i=k-1;i>=1;i--)
	{
		for(q=a[i];q<a[i+1]-1;q++)
		{
			printf("%c",p[q]);
		}
		printf(" ");
	}
	{
		for(q=a[0];q<a[1]-1;q++)
		{
			printf("%c",p[q]);
		}
	}
}
