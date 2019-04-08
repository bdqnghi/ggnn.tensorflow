void main()
{
	int a=6,b=3,c,d,e,f,n;
	
	scanf("%d",&n);
	for(a=6;a<=n;a=a+2)
	{		
		for(b=3;b<=a;b=b+2)
		{   
			c=(int)(sqrt(b));
			for(d=2;d<=c;d++)
			{
				if(b%d==0) break;
			}
			if(d>=c+1)
			{
			 f=a-b;
			 e=(int)(sqrt(f));
             for(d=2;d<=e;d=d++)
				if(f%d==0) break;
			}
		if(d>=e+1) break;
		}		
		printf("%d=%d+%d\n",a,b,f);
	}
}