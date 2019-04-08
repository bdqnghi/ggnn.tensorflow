void main()
{
	int m,n,i,a,x=0,y=0;
	scanf("%d",&m);
	for (n=6;n<=m;n=n+2)
		for (i=3;i<=n/2;i=i+2)
		{
			for (a=3;a<=sqrt(i);a=a+2)
			
				if(i%a==0) break;
			    if(a>sqrt(i)) 
			
				{for (a=3;a<=sqrt(n-i);a=a+2)
			
				if((n-i)%a==0) break;
			    if(a>sqrt(n-i)) 
			
			{printf("%d=%d+%d\n",n,i,n-i);break;}
				}
			
		
		}
}