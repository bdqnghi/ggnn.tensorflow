
int main()
{
	int n,a[1000],i,j,k,s1=0,s2,t1,t2,square;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
			scanf("%d",&a[j]);
		if (s1==0)
		{
		   for (j=1;j<=n;j++)
		   {
		    	if(a[j]==0)
				{
				   t1=i;
				   s1=j;
				   for (k=j;k<=n;k++)
				    	if (a[k]!=0)
						{
					    	s2=k-1;
							break;
						}
				}
				if (s1!=0) break;
		   }
		}
		else
		{
			if (a[s1]==0 && a[s1+1]==0)
				t2=i;
		}
	}
	square=(s2-s1-1)*(t2-t1-1);
	printf("%d",square);
	return 0;
}


			
