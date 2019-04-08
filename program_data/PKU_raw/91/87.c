int main()
{
	int k,j;
    char a[100],b[100]={'0'};
	char c[100];
    gets(a);
    k=strlen(a);
	for(j=0;j<k-1;j++)
	{
		b[j]=a[j+1]+a[j];
	}
	b[k-1]=a[k-1]+a[0];	
	for(j=0;j<k;j++)
	{
		c[j]=(char)b[j];
	    printf("%c",c[j]);
	}
	return 0;
}