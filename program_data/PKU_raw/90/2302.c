


int devide(int m,int n)
{   
    int full,empty,sum;
    if (n==2)
    return 1+m/2;
    else 
      {
    empty=devide(m,n-1);
    if (m<n)
    full=0;
    else
    full=devide(m-n,n);
    sum=full+empty;
    return sum;
      } 
}




main()
{
      int N,M,n,c,t,k;
      scanf("%d",&n);
      for(t=1;t<=n;t++)
      {
      scanf("%d %d",&M,&N);
      if (N==1)
      printf("1");
      else
      printf("%d",devide(M,N)); 
      printf("\n"); 
      }
}