void main()
{
	long int a,b,n=0;
	long int i,j,l;
	char c[1000],d[1000];
	scanf("%d",&a);
	scanf("%s",c);
	scanf("%d",&b);
	l=strlen(c);
	for(i=0;i<l;i++)
	{    if(c[i]>=65&&c[i]<=90)
		 c[i]=c[i]-55;
	     else if(c[i]>=97&&c[i]<=122)
			 c[i]=c[i]-87;
		 else c[i]=c[i]-48;
	}
    for(i=0;i<l;i++)
		n=n*a+c[i];
    for(i=0,j=0;;i++,j++)
	{
		d[i]=n%b;
	    n=n/b;
		if(n!=0)
			continue;
		else break;
	}
	for(i=0;i<=j;i++)
		if(d[i]>=10)
			d[i]=d[i]+55;
		else
			d[i]=d[i]+48;
     for(i=j;i>=0;i--)
		 printf("%c",d[i]);
}
