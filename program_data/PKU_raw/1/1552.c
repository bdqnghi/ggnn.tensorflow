int factor(int N,int min)
{
  int result=1,i;
  if(N<min)
  {
    return 0;		
  }	
  for(i=min;i<N;i++)
  {
    if(N%i==0)
    {
      result+=factor(N/i,i);	  	
    }		
  }
  return result;
}
main()
{
  int n=0,i=0,x=0,y=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    	scanf("%d",&x);
	y=factor(x,2);
	printf("%d\n",y);	
  }
  return 0;
}
