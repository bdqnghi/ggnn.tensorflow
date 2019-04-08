main()
{
	char n[33],m[33];
	long c,x,y;
	int a,b,d,e,l,i;
	scanf("%d%s%d",&a,n,&b);
	l=strlen(n);
	for(i=0;i<l;i++)
	{if(n[i]>='a'&&n[i]<='z') n[i]=n[i]+10-'a';
	if(n[i]>='A'&&n[i]<='Z') n[i]=n[i]+10-'A';
	if(n[i]>='0'&&n[i]<='9') n[i]=n[i]-'0';}
	c=0;
	for(i=0;i<=l-1;i++)
	{
		c=c*a+n[i];
	}
	d=0;
	do
	{
		x=c/b;
		y=c%b;
		for(i=d-1;i>=0;i--) m[i+1]=m[i];
		m[0]=y;
		c=x;
		d++;
	} while(x!=0);
	m[d]='\0';
	for(i=0;i<d;i++)
	{
		if(m[i]>=0&&m[i]<=9) m[i]=m[i]+'0';
		else m[i]=m[i]+'A'-10;
	}
	printf("%s\n",m);
}