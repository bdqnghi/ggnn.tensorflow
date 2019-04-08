int main()
{
   int n,i,j,k,m,a[501],b[501];
   j=0; 
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
		scanf("%d",&a[i]); 
	} 
	for(k=0;k<250;k++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==2*k+1)
			{
				 b[j]=a[i];
				 j+=1; 
			} 
		} 
	}
	if(j!=0)
	{ 
	  for(m=0;m<j-1;m++)
	  {
		printf("%d,",b[m]); 
	  }
	  printf("%d",b[j-1]); 
	} 
	scanf("%d",&n); 
	return 0; 

} 
