

main()
{
      int m,n,i,j,k,l,a[300];
      for(i=1;;i++)
      {   scanf("%d %d",&n,&m);
          if(m==0&&n==0)
            break;
          else
          {for(j=0;j<n;j++)
              a[j]=j+1;
           
           for(k=1,j=0;k<=n-1;k++)
              { 
                 
                    if((m-1)%(n-k+1)+j<=n-k)
                      {for(l=(m-1)%(n-k+1)+j+1;l<=n-k;l++)
                         a[l-1]=a[l];
                       if( (m-1)%(n-k+1)+j==n-k)
                          j=0;
                       else
                          j=(m-1)%(n-k+1)+j;
                      }
                    else
                       {  for(l=((m-1)%(n-k+1)+j)-(n-k);l<=n-k;l++)
                             a[l-1]=a[l];
                          j= ((m-1)%(n-k+1)+j)-(n-k)-1; 
                       }
              }  
              
           printf("%d\n",a[0]);
          }  
      }
      
} 
