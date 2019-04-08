int main()
{
	int a[100000],i,j,k,l,m,n;
	scanf("%d",&n);
	l=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<=n;i++)
	{   
	
		
			
			m=0;
			for(k=1;k<i;k++)
			{
				if(a[k]!=a[i])
					m=m+1;

			}
			if(m==i-1)
			{l=l+1;
			if(l==1)
				printf("%d",a[i]);else printf(" %d",a[i]);}
			
		
	
	}
	
	return 0;
}