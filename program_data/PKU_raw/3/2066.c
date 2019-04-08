int main()
{
   int n,i,j,k,m,a[1000];
   scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
   {
		scanf("%d",&a[i]); 
	} 
	for(i=0;i<n;i++)
	{
		m=k-a[i];
		for(j=0;j<n;j++)
		{
			if(j==i)
			{continue;}
			if(a[j]==m){ 
			printf("yes");
			break;
			} 
		}
		 if(a[j]==m)
		 break; 
	}
	if(i==n&&j==n)
	printf("no"); 
	scanf("%d",&n); 
	return 0; 

} 