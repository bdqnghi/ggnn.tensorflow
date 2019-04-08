int prime(int x)
      {
       int j=1,i;
       for(i=2;i<x&&j==1;i++)
       {
        if(x%i==0)
        j=0;
        }
        return(j);
        }
int hui(int x)
{
    int i,b[100],n,a;
    a=1;
    for(i=1;x!=0;i++)
    {
                b[i]=x%10;
                x=x/10;
    }
     n=i-1;
    if(n%2==0)
    {
              for(i=1;i<=n/2;i++)
              if(b[i]!=b[n-i+1])
              {
              a=0;
              break;
              }
              return a;
              }
    else
    {
              for(i=1;i<=(n-1)/2;i++)
              if(b[i]!=b[n-i+1])
              {
              a=0;
              break;
              }
              return a;
    }        

}
              
              
main()
{
      int m,n,i,j,count=0;
      scanf("%d %d",&m,&n);
      for(i=m;i<=n;i++)
      {
                       if(prime(i)==1)
                       {
                       if(hui(i)==1)
                         {
                           if(count==0)
                           {
                           printf("%d",i);
                           count++;
                           }
                           else  printf(",%d",i);
                         }
                       }
      }
      if(count==0)
      printf("no\n");
      getchar();
      getchar();
}
                       
                