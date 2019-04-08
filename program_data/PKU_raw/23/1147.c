int main()
{
	char a[100];
	int b[100];
	gets(a);
	int i,l=0,j,strl,k,m,n;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			l=l+1;
			b[l]=i;
		}
	}
	strl=strlen(a);
	if(l==0)puts(a);
	 /* ????????“i==strl”??“l==0” */
	else
	{
	for(m=b[l]+1;m<strl;m++)
		printf("%c",a[m]);
	for(j=l;j>1;j--)
	{
		for(k=b[j-1];k<b[j];k++)
			printf("%c",a[k]);
	}
	printf(" ");
	for(n=0;n<b[1];n++)
		printf("%c",a[n]);
	}
	return 0;
}
