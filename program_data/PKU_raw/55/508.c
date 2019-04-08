void main()
{
	int a,b,i,p,q;
	char n[100],out[100];
	char c;
	long m,k;
	scanf("%d%s%d",&a,n,&b);
	for(i=0;(c=n[i])!='\0';i++)
	{
		if(c>='A'&&c<='Z')
			q=c-55;
		else if(c>='a'&&c<='z')
			q=c-87;
		else 
			q=c-48;
		if(i!=0)
			m=a*m+q;
		else
			m=q;

	}
	for(i=0;(k=m/b)!=0;i++)
	{
		p=m%b;
		m=m/b;
		if(p<10)
			out[i]=p+48;
		else
			out[i]=p+55;

	}
	p=m%b;
	if(p<10)
		out[i]=p+48;
	else
		out[i]=p+55;
	for(;i>=0;i--)
		printf("%c",out[i]);
	

}