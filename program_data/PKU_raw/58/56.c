void main()
{
	int n,i,j,k,l;
	char str[1000][80],c;
	char (*p)[90];
	scanf("%d\n",&n);
	p=str;
	for (i=0;i<n;i++) gets(*(p+i));
	for (i=0;i<n;i++)
	{
		l=strlen(*(p+i));
		k=0;
		for (j=1;j<l;j++) 
		{
			c=*(*(p+i)+j);
			if (!((c>='0'&&c<='9')||(c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c=='_'))) k=1;
		}
		c=**(p+i);
	    if (!((c=='_')||(c<='Z'&&c>='A')||(c<='z'&&c>='a'))) k=1;
		if (k==0) printf("1\n");
		else printf("0\n");
	}
}