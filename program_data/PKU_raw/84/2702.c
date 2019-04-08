void main()
{
	int n,i,a,b,c;
	scanf("%d",&n);
	scanf("%d %d",&a,&b);
	if(b>a)
			c=b,b=a,a=c;
	for(i=1;i<=(n-2);i++)
	{
	    scanf("%d",&c);
		if(c>a) b=a,a=c;
		else if(c>b) b=c;
	}
	printf("%d\n%d\n",a,b);	
}