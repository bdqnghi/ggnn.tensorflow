int main()
{
	int i,j,same=0,flag=1;
	double n;
	char a[500],b[500],c[100];
	gets(c);
	n=atof(c);
	gets(a);
	gets(b);
    for(i=0;i<strlen(a);i++)
	{
		if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'))
		{flag=0;}
		if(a[i]==b[i])
		{
			same++;
		}
	}
    double m;
	m=1.0*same/strlen(a);
	if((strlen(a)!=strlen(b))||flag==0)
	{
		printf("error");
	}
    else if(m<=n)
	{
		printf("no");
	}
	else if(m>n)
	{
		printf("yes");
	}
	return 0;
}

