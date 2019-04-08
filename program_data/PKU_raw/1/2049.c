int f(int n,int i)
{
    int sum=0;
    for(i;i<=(int)sqrt(n);i++){
        if(n%i==0) {
            sum+=f(n/i,i);
        }
    }
    return sum+1;
}
main()
{
      int i0,n0;
      scanf("%d",&n0);
      for(i0=0;i0<n0;i0++){
          int n;
          scanf("%d",&n);
          printf("%d\n",f(n,2));
      }
}
