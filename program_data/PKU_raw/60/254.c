int main()
{
    int l,i,j,m,n,a[1000000];
    double k;
    scanf("%d",&n);
    if(n<5)
        printf("empty\n");
    else 
      { a[0]=3;m=0;
               for(i=1;m<n;)
        {       
          for(m=5;m<=n;m++)
          {
             
             k=sqrt(m);
             for(j=2;j<=k;j++)
             
                if(m%j==0)
                break;
                if(j>k)
                {a[i]=m;
                
                i++;}
                              
                      }
                    }  
                      for(l=1;l<i;l++)
                      {if(a[l]==(a[l-1]+2))
                         printf("%d %d\n",a[l-1],a[l]);} 
                         }   
    getchar();
    getchar();
    return 0;
    
    }
