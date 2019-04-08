
int main()
{
	int n,i,j,t=0,s=0,m=0,l=0,a,q;
	scanf("%d",&n);
	t=n,s=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a);
			if(a==0)
			{
				if((m+l)<=(i+j))
			    m=i,l=j;
                if((t+s)>=(i+j))
				t=i,s=j;
			}
		}
	}
	q=(m-t-1)*(l-s-1);
	printf("%d",q);
	return 0;
}