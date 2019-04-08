int prime(int a)
{
  int i;
  int  m;
  m=sqrt(a)+1;
  for (i=2;i<m;i++)	
	{
      if (a%i==0)
	   break;
	}
	if (i==m)
	return 1;
}
main ()
{
  int i,j,k;
  int t;
  int v;
  int n;
  scanf ("%d",&n);
  int count=0;
  for (i=2;i<=n-2;i++)
  {
    t=prime (i);
    if (t==1)
     {
		j=i+2;	
	    v=prime(j);
	    if (v==1)
	    {
		 printf ("%d %d\n",i,j);
		 count ++;
		}	    
	 }
  }
    if (count==0)
    {
     printf ("empty");
	}
  

}