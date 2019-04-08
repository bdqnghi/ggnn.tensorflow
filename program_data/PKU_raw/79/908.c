main()
{     
      int m,n,j,i,k,c=0;
      int b[1000],a[1000];
      for(c=0;;c++)
      {
      scanf("%d %d",&n,&m);
      if(m==0&&n==0)
      break;
      else if(n==1)
      b[c]=n;
      else
      {
      for(i=0;i<=n-1;i++)
      a[i]=i+1;
      j=0;
      for(i=1;i<=n-1;i++)
      {
      j=(j+m-1)%(n-i+1);
      for(k=0;k<n-i;k++)
          {
          if(k<j)
          a[k]=a[k];
          else
          a[k]=a[k+1];
          }
      b[c]=a[0];
      }
      }
      }
      for(i=0;i<c;i++)
      {if(i==0)
      printf("%d",b[i]);
      else
      printf("\n%d",b[i]);
      }
      
      getchar();
      getchar();
        return 0;
      }
            
      
      
