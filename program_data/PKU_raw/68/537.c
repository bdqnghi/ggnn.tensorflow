void main()
{
	int a,n,b,i,c;
	scanf("%d",&n);
	for(a=6;a<=n;a=a+2)
	{
      for(b=3;b<=a/2;b=b+2)          
		{
				for(i=2;i<=sqrt(b);i++)
				if(b%i==0)break;
                if(i<(sqrt(b)+1)&&i>sqrt(b))
				{
					c=a-b;
			    for(i=2;i<=sqrt(c);i++)
				if(c%i==0)break;
				if(i<(sqrt(c)+1)&&i>sqrt(c))
				{
					printf("%d=%d+%d\n",a,b,c);
				    break;
				}
				}
				  	 }

	}
}