main()
{
	char a[100]={0},b[100]={100};
	int i,j,k,l1,l2;
	gets(a);
	gets(b);
	l1=strlen(a);
	l2=strlen(b);
	for (i=0;i<l1;i++)
	{
		if (a[i]>='A'&&a[i]<='Z')
			a[i]+='a'-'A';
	}
	for (i=0;i<l2;i++)
	{
		if (b[i]>='A'&&b[i]<='Z')
			b[i]+='a'-'A';
	}
	j=strcmp(a,b);
	if (j==0)
		printf("=");
	if (j>0)
		printf(">");
	if (j<0)
		printf("<");
}