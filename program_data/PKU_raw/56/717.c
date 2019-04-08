void main()
{
	int a[9],n,k,i;
	scanf("%d",&n);k=n;
	for(i=0;i<9;i++)
	{
		a[i]=k%10;k=k/10;
	}
	  for(i=1;i<9;i++)
	  {
		a[i]=a[i-1]*10+a[i];
	  }
	k=a[8];
	    while(k%10==0)
		{
		  k=k/10;
		}
		printf("%d",k);
}