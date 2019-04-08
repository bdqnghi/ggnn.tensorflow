int pp(int p);
int hv(int h);
main()
{
      int n,m;
      scanf("%d %d",&n,&m);
      int i=0;
      int count=0;
      for(i=n;i<=m;i++)
      {
        // printf(" %d ",i);
        // printf(" %d \n",pp(i));
         if(pp(i)&&hv(i))
           {
              //printf(" %d ",count);
              if(count==0)
                {
                    printf("%d",i);     
                }
              if(count>0)
                {
                    printf(",%d",i);     
                }
              count++;           
           }
      }
     if(count==0)
     {
        printf("no");
     } 
      getchar(); getchar(); getchar(); getchar(); getchar(); getchar(); getchar(); getchar(); getchar(); getchar();
}
int pp(int p)
{
    int i=0;
    if(p==1)
       return(0);
    if(p==2||p==3||p==5)
       return(1);
    for(i=2;i<=sqrt(p);i++)
    {
       if(p%i==0)
       {
          return(0);
       }
    }
    return(1);
}
int hv(int h)
{
    int a[8];
    int i=1;
    while(h>0)
    {
       a[i]=h%10;
       h/=10;
       i++;
    }
    i--;
    //printf("i= %d ",i);
    //int s=0;
    //for(s=1;s<=i;s++){printf("%d",a[s]);}printf(" ");
    int j=0;
    for(j=0;j<=i/2;j++)
    {
       if(a[j+1]!=a[i-j]) 
       {
          // printf("  0 \n");
       return(0);}
    }                         //printf("  1 \n");
    return(1);                 
}
