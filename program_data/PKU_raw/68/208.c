int main()
{
	int i,j,n,a,b,c,k,p,q,m;
	scanf("%d",&n);
		for(a=6;a<=n;a=a+2)
		{
			for(i=3;i<=a/2;i=i+2)
			{
				k=sqrt(i);
				for(j=2;j<=k;j++)
				{
					if(i%j==0)break;
				}
				if(j>=k+1)
				{
					b=i;
				    c=a-b;
					p=sqrt(c);
					for(m=3;m<=p;m=m+2)
					{
						if(c%m==0)break;
					}
					if(m>=p+1)
					{
						q=c; 
						printf("%d=%d+%d\n",a,b,q);
						break;
					}
				}
			}
		
			
			
		}
					
		
	return 0;
}

