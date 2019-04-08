main()
{
      int a[1000][1000];
      int n,m,i,p,q,k,j,l,b;
      for(i=1;;i++)
      {
              scanf("%d %d",&n,&m);
              if(n==0)
              break;
               for(l=0;l<n;l++)
              {
                              a[0][l]=l+1;//?????????? 
              }
              for(k=1;k<n;k++)
              {
                               p=m%(n-k+1);//???K??????????? 
                               for(j=0;j<=n-k;j++)
                               {
                                             
                                             q=(p+j)%(n-k+1);//???????????? 
                                             a[k][j]=a[k-1][q];
                                             b=a[k][0];
                               }
              }
              printf("\n%d",a[n-1][0]);
      }
}