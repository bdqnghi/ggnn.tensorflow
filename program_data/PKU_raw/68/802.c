
	
void main()
{
	int h,a,b,m,n,k,i,s,j,r,q,t,o,u,p;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		
		for(a=3;a<=i/2;a=a+2)
		{
			h=0;
			b=i-a;
			p=sqrt(a);
			for(j=3;j<=p+2;j++)
			{   
				if(p+2==3)
				{
					j=p+3;break;
				}
				r=a%j;
				if(r==0) break;
			}
			if(j==p+3)
			{
				o=sqrt(b);
				for(u=3;u<=o+2;u++)
				{
					if(o+2==3)
					{
						u=o+3;break;
					}
					r=b%u;
					if(r==0) break;
				}
				if(u==o+3)
				{
					printf("%d=%d+%d\n",i,a,b);h=1;
				}
			}
			if(h==1) break;
		}
	}
}
				

	


