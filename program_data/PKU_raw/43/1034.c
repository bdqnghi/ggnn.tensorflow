
int main()
{
    int a[5001]={0};
	int m,i,n,j;
	int q,k;

	q=0;k=0;
    for(i=2;i<=10000;i++)
	{
		for(j=1;j<=i/2;j++)
			{
				if(i%j==0) q=q+1;
			}
		if(q==1)
			{
				a[k]=i;
				k=k+1;	
			}
		q=0;		
	}

	scanf("%d",&m);

    n=k-1;
	for(i=0;i<=n-1;i++)
	{
	  for(j=i;j<=n-1;j++)
	  {
	  if(a[i]+a[j]==m)
	  {
		  printf("%d %d",a[i],a[j]);
		  printf("\n");
	  }
	  }
	
	
	}


	return 0;
}