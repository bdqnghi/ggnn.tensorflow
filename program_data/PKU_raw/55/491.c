main()
{
	int a,b,flag;
	char n[100],m[100];
	char c;
	long i,s=0,k,x,y,t,u;
	scanf("%d%s%d",&a,n,&b);
	for(i=0;n[i]!='\0';i++) {}
	k=i-1;
	for(i=0;i<=k;i++)
	{
		c=n[i];
		if(c>='a' && c<='z') x=c-87;
		if(c>='A' && c<='Z') x=c-55;
		if(c>='0' && c<='9') x=c-48;
		if(c=='0') flag=0;
		s=s+x*(long)pow(a,k-i);
	}
	t=s;
	for(i=0;t>0;i++) 
		u=t%b,t=(t-u)/b;
	k=i-1;
	for(i=0;s>0;i++)
	{
		y=s%b;
		if(y>9) c=y+55;
		else c=y+48;
		m[k-i]=c;
		s=(s-y)/b;
	}
	for(i=0;i<=k;i++) printf("%c",m[i]);
	if(flag==0) printf("0");
	printf("\n");
}