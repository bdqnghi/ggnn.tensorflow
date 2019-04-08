int po(int k)
{
    int t=1,i;
    for(i=1;i<=k;i++)
    {
                     t=t*10;
    }
    return t;
}
int su(int a)
{
    int i,t=1;
    for(i=2;i<=sqrt(a);i++)
    {
                           if(a%i==0)
                           {
                                     t=0;
                                     break;
                           }
    }
    return t;
}   
int hui(int a)
{
    int b[100]={0},i,l,t=1,k;
    for(i=1;i<100;i++)
    {
                      t=t*10;
                      if(a<t)
                      break;
    }
    l=i;                 
    for(i=0,k=l;i<l;i++)
    {
                           b[i]=a/po(k-1);
                           a=a%po(k-1);
                           k--;
    }
    for(i=0;i<l/2+1;i++)
    {              
                   if(b[i]!=b[l-i-1])
                   {
                                     return 0;
                                     break;
                   }
                   if(i==l/2)
                   return 1;
    }
}                               
main()
{
      int m,n,i,j,k=0,t=0;
      scanf("%d %d",&m,&n);
      for(i=m;i<=n;i++)
      {
                       if(su(i)==1&&hui(i)==1)
                       {
                                              if(k==0)
                                              {
                                                      printf("%d",i);
                                                      k++;
                                              }
                                              else
                                              printf(",%d",i);
                                              t++;
                       }
      }
      if(t==0)
      printf("no");
      getchar();
      getchar();
}
      
