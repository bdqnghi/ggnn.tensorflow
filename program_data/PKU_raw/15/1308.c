int a[1000][1000];
int main()
{
	int i,j,n,b=0,c,d=0,m,s;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]==0)
				{
					b=i;
					c=j;
					break;
					
				}
			}
			if(b!=0)
				break;
		}
			for(i=n-1;i>=0;i--)
			{
				for(j=n-1;j>=0;j--)	
				{
					
					if(a[i][j]==0)
					{
						d=i;
						m=j;
						break;
					}
				}
				if(d!=0)
					break;
			}
				s=(d-b-1)*(m-c-1);
				printf("%d",s);
				
				return 0;
}
