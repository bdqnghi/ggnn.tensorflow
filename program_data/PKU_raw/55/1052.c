void main()
{	
	int i,j,k,l,a,b,c,s,m=0;
	char n[32],x[32];
	scanf("%d %s %d",&a,n,&b);
	l=strlen(n);
	for(i=0;i<l;i++)
	{
		for(j=1,s=1;j<=i;j++)s=s*a;
		if(n[l-i-1]>=65&&n[l-i-1]<=90) k=n[l-i-1]-55;
		else
			if(n[l-i-1]>=97&&n[l-i-1]<=122)	k=n[l-i-1]-87;
		else k=n[l-i-1]-48;
		k=k*s;
		m=m+k;
	}
	for(i=0;;i++)
	{
		c=m%b;	
		if(c<=9) x[i]=c+48;
		else x[i]=c+55;
	if(m/b==0) break;
	m=m/b;
	}
	for(j=0;j<=i;j++)
	printf("%c",x[i-j]);
}

	