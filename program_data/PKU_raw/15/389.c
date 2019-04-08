int main()
{
	int i,j,a,b,n,x=0,y=0,l1,l2,q1,q2,s;
	scanf("%d",&n);
	for(i=1;i<=n*n;i++)
	{
		scanf("%d",&a);
		if(a==0)
		{
			x=i;
			break;}
	}
    for(j=1;j<=n*n-x;j++)
	{
		scanf("%d",&b);
		if(b==0)
            y=x+j;
	}
	l1=x/n+1;
	if(x%n!=0)
	{
	    l1=x/n+1;
		q1=x%n;
	}
	else
	{
		l1=x/n;
		q1=n;
	}
	if(y%n!=0)
	{
		l2=y/n+1;
		q2=y%n;
	}
	else
	{	l2=y/n;
		q2=n;
	}
	s=(l2-l1-1)*(q2-q1-1);
	printf("%d",s);
	return 0;
}