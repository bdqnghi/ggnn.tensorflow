void main ()
{
	int n,k,j,i,sum=0;
	
	int a[1000000];
	scanf ("%d",&n); 
	for (j=0;j<=n-1;j++)
		scanf("%d ",&a[j]);
	scanf("%d",&k);
	for (j=0;j<n;j++)
	{
		if (a[j]==k)
		{
			{
           for (i=j;i<n;i++)
		  
			   a[i]=a[i+1];
			}
		   sum=sum+1;
		  
		   j=j-1;
		}
		else a[j]=a[j];
		
	}
	
	printf("%d",a[0]); for (j=1;j<n-sum;j++)printf(" %d",a[j]);
}
