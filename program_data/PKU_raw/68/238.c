int main()
{
	int n,i,k,m=0,x[99999],y[99999],j,h;
	scanf("%d",&n);
	for(i=6;i<=n;i++,i++)
	{
		for(k=3;k<i;k++)
		{
			for(j=2;j<=sqrt(k);j++)
			{
				if(k%j==0)
					break;
			}
	    	if(j>sqrt(k))
			{
			   for(h=2;h<=sqrt(i-k);h++)
			   {
				if((i-k)%h==0)
					break;
			   }
			   if(h>sqrt(i-k))
			   {	
				   x[m]=k;
			       y[m]=i;
			 	    m++;
					break;
			   }
			}
		}
	}
	for(j=0;j<m;j++)
	printf("%d=%d+%d\n",y[j],x[j],y[j]-x[j]);
	return 0;
}