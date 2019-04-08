void main()
{
	int n,m,a,b,i,k,leap;
	scanf("%d",&n);
	for(m=6;m<=n;m=m+2)
	{
        a=3;
		
		for(;;a=a+2)
		{for(;a<=m;a=a+2)
		   {
		for(i=3,leap=1;i<=sqrt(a);i=i+2)
			
			if (a%i==0||a%2==0){leap=0;break;}
			if(leap==1)break;
		   }
		b=m-a;
        for(k=3;k<=sqrt(b);k=k+2)
		if (b%k==0||b%2==0){leap=0;break;}
		
		if(leap==1)
		{printf("%d=%d+%d\n",m,a,b);break;}
		
		
		}
	
	}
}
