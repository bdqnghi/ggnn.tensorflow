int main()
{
	int i,a1,b1,n,a[5000],b[5000],k;
	double m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	a1=a[0];
	b1=b[0];
    for(i=0;i<n;i++)
	{
	   if(a1>a[i])
	   {
		   a1=a[i];
	   }
	   if(b1<b[i])
	   {
           b1=b[i];
	   }
	}
    for(m=a1;m<=b1;m=m+0.5)
	{
      for(k=0;k<n;k++)
	  {
		  if(a[k]<=m&&m<=b[k])
			 break;
	  }
	  if(a[k]<=m&&m<=b[k])
	  { 
		  if (m!=b1)
		  continue;
	  }
	  else
	  {
		  printf("no");
		  break;
	  }
	  printf("%d %d",a1,b1);
	}
	return 0;
}
