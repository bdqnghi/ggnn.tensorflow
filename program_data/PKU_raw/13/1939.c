int main()
{
	int n,i,j,a[20000],m;
    scanf("%d",&n);
	if(n>=1&&n<=20000)
	{	
		
		for(i=0;i<n;i++)
		{
			m=0;
			if(i==0)
			{
				scanf("%d",&a[0]);
				printf("%d",a[0]);
			}	
			else 
			{
				scanf(" %d",&a[i]);
				for(j=0;j<i;j++)                  
				{
					if(a[i]==a[j])
					{
						m++;
					}
				}
				if(m==0)
				{
				printf(" %d",a[i]);
				}
			}
		}
	}
	return 0;
}