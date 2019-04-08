void main()
{
	int i,n,q,t=0,p=0,a[500];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	if(n==1)
     printf("%d",a[0]);

	else
	{
	 printf("%d",a[0]);
   for(i=1;i<n;i++)
	{
	   t=0;
	   for(q=0;q<i;q++)	
	   {
		if(a[i]!=a[q])
		t++;
	   }
	  if(t==i)
		 printf(",%d",a[i]); 
	}
	}
		
}
