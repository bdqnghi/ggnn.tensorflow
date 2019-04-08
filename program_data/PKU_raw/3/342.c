int main ()
{
    int n,k,x[1000]={0},i,j;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
           if((x[i]+x[j])==k)
		   {
			   printf("yes");
			   break;
		   }
		}
           if((x[i]+x[j])==k)			   
			   break;
		
	}
	    if((x[i]+x[j])!=k)
		   printf("no");
			   return 0;
}