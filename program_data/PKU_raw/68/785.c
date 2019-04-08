void main()
{
    int a[50001],i,j,n;
	a[3]=a[5]=a[7]=1;
	a[4]=a[6]=a[8]=0;
	scanf("%d",&n);
	for(i=9;i<=50000;i++)
		a[i]=1;
	for(i=9;i<=50000;i++)
	{
	    if(i%2==0) a[i]=0;
		else if(i%3==0) a[i]=0;
		else if(i%5==0) a[i]=0;
		else if(i%7==0) a[i]=0;
		else 
			for(j=11;j<=sqrt(i);j++)
			{
			   if(i%j==0)
			   {
			   a[i]=0;
			   break;
			   }
			}
	}
   for(j=6;j<=n;j=j+2)
   {
	for(i=3;i<=j/2;i=i+2)
	{
	  if(a[i]==1&&a[j-i]==1)
	  {
		  printf("%d=%d+%d\n",j,i,j-i);
	  break;
	  }
	}
   }
}