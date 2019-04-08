
int main()
{   
    unsigned int n,i,k,m,N;
    scanf("%d%d",&n,&k);
    N=n;
    if(n==2)
      {
          m=8-k;
          printf("%d",m);
      }
    else
      {
          n=pow(n,n);
          m=n-(N-1)*k;
          printf("%d",m);
      }
      return 0;
}