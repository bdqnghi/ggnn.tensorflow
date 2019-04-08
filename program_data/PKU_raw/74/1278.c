void main()
{
	int m,n,i,j,a=0,b=0,c=0,d,p=0,q=0,k=0;
	scanf("%d%d",&m,&n);
	if(m%2==0)
		m=m+1;
	for(i=m;i<=n;i=i+2)
	{
		for(j=3;j<=sqrt(i);j=j+2)
		{
			if(i%j!=0)
			{
				b=b+1;}
			else
			{b=0;break;}
		}
          if(b!=0)
		  { 
			  d=i;
			  q=q+1;
			  while(d>0)
			{
				a=d%10;
				c=10*c+a;
				d=d/10;
			}
			if(c==i)
			{p=p+1;
			k=k+1;
			if(p==1)
			{printf("%d",i);
			c=0;}
			else
			{printf(",%d",i);
			c=0;}
			}
		  else
		  { c=0;}}
		  
		

		  

	}

			if(q==0||k==0)
			printf("no");
}