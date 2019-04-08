int main()
{
	int n,i,k,j,m,a;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
	{
		for(j=3;j<i;j++)
		{
		   for(k=2;k<=sqrt(j);k++)
		   {
		       if(j%k==0)
			   break;
		   }
		       if(k>sqrt(j))
			   {
		        	m=i-j;
			   }
		 	for(a=2;a<=sqrt(m);a++)
			{
	        	if(m%a==0)
			    break;
			}
		       if(a>sqrt(m))
			   {
		      	printf("%d=%d+%d\n",i,j,m);
				break;
			   }
		}
	}
	return 0;
}