main()
{
	long int p=0;
	int m,n,e=1,i,q,N;
	char a[100],b[100];
	scanf ("%d",&m);
	scanf ("%s",a);
	scanf ("%d",&n);
	N=strlen(a);
	for(i=0;i<=N-1;i++)
	{
		if (a[i]>='a'&&a[i]<='z')
			b[i]=a[i]-'a'+10;
		else if (a[i]>='A'&&a[i]<='Z')
			b[i]=a[i]-'A'+10;
		else
			b[i]=a[i]-'0';
	}
	for(i=N-1;i>=0;i--)
	{
		p+=b[i]*e;
		e*=m;
	}
	for (i=0;;i++)
	{
      b[i]=p%n;
	  p=p/n;
	  if (p==0)
	  {
		  q=i;
		  break;
	  }
	}
    for (i=q;i>=0;i--)
	{
		if (b[i]>=0&&b[i]<=9)
			printf ("%c",b[i]+'0');
		else 
			printf ("%c",b[i]-10+'A');
	}
}