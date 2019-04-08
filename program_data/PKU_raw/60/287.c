main()
{
      int n,i,j,k,m,x[10000];
      scanf("%d",&n);
      if(n<5)
         printf("empty");
      else
      {
          for(i=3,k=0;i<=n;i=i+2)
          {
                          for(j=2;j<i;j=j++)
                          {
                                                 if(i%j==0)
                                                      break;
                          }
                          if(j==i)
                          {     
                                x[k]=i;
                                k++;
                          }
          }
          for(m=0;m<k;m++)
          {
                          if(x[m+1]-x[m]==2)
                                   printf("%d %d\n",x[m],x[m+1]);
          }
      }
      getchar();
      getchar();
}
                               
                          
                          
                                                  
                                                       
                                           
