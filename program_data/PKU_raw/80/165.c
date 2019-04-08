void main()
{
	int a,b,c,d,e,f,m,n,i,j,k,p;
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d %d %d",&d,&e,&f);
	m=0;
	n=0;
	for (i=1;i<b;i++)
	{
		if (i==1||i==3||i==5||i==7||i==8||i==10)
			n=n+31;
		else if (i==2)
		{
			if(a%400==0||(a%100!=0&&a%4==0))
				n=n+29;
			else n=n+28;}
		else n=n+30;}
	n=n+c;
	for (j=1;a+j<=d;j++)
	{
		if ((a+j-1)%400==0||((a+j-1)%100!=0&&(a+j-1)%4==0))
			m=m+366;
		else m=m+365;}
	for (k=1;k<e;k++)
	{
		if (k==1||k==3||k==5||k==7||k==8||k==10)
			m=m+31;
		else if (k==2)
		{
			if(d%400==0||(d%100!=0&&d%4==0))
				m=m+29;
			else m=m+28;}
		else m=m+30;}
    m=m+f;
	p=m-n;
	printf("%d",p);
}