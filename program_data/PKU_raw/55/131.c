void main()
{
	char a[32]={0},b[32]={0};
	long int n=0;
	int i,k,j1,j2;
	scanf("%d%s%d",&j1,a,&j2);
	for (i=0;a[i]!=0;i++)
		if (a[i]>='0'&&a[i]<='9')
			n=n*j1+a[i]-'0';
		else if (a[i]>='A'&&a[i]<='Z')
			n=n*j1+a[i]-'A'+10;
		else if (a[i]>='a'&&a[i]<='z')
			n=n*j1+a[i]-'a'+10;
	if (n==0)
		printf("0\n");
	else
	{
		for (i=0;i<=31,n>0;i++)
		{
		    k=n%j2;
		    if (k<10)
			    b[i]=k+'0';
		    else b[i]=k-10+'A';
		    n=n/j2;
		}
	    i=31;
	    while (b[i]==0)
		    i--;
	    for (;i>=0;i--)
		    printf("%c",b[i]);
	    printf("\n");
	}
}
