void main()
{
	int i,q=1,m=0,n,p,k,d;
	scanf("%d %d",&n,&k);
	p=n-1;
    for(;;)
	{
loop:if(1)
		m++;
		d=m*n+k;
		for (i=2;i<=n;i++)
		{
			if (d%p!=0) goto loop;
			d=d*n/p+k;	
		}
		break;
	}
	printf("%d",d);
}