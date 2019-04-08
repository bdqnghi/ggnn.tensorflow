void main()
{ 
	long int s=0;
	int a,b,n,m,i=0,x[100],y[100];
	char d[100],c[100];
	scanf("%d %s %d",&a,d,&b);
	n=strlen(d);
	for(i=0;i<n;i++)
	{
		if(d[i]>='A'&&d[i]<='Z')
			x[i]=d[i]-55;
		else if(d[i]>='a'&&d[i]<='z')
				x[i]=d[i]-87;
		else if(d[i]>='0'&&d[i]<='9')
				x[i]=d[i]-48;		
	}
	for(i=0;i<n;i++)
		s=s*a+x[i];
	m=0;
	while(s>=b)
	{
		y[m]=s%b;
		s=s/b;
		m++;
	}
	y[m]=s;
	for(i=m;i>=0;i--)
	{
		if(y[i]<9)
			c[i]=y[i]+48;
		else
			c[i]=y[i]+55;
		printf("%c",c[i]);
	}
}