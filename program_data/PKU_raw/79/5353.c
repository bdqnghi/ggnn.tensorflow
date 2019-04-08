
int main()
{
	int m,n,i,n0,p1,m0;
	int a[301];
	while(scanf("%d%d",&n,&m),n!=0)
	{
		for(i=0;i<n;i++)
			a[i] = i+1;
		n0 = n;		
		p1 = 0;
		while(n0>1)
		{
			m0 = m;
			while(m0!=1)
			{
				if(a[(p1+1)%n])
				{
					m0--;					
				}
				p1=(p1+1)%n;

			}
			a[p1] = 0;
			while(a[p1%n]==0)
			{
				p1=(p1+1)%n;					
			}
			n0 --;
			
		}
		
		printf("%d\n",a[p1]);
		
	}
	
	return 0;
}