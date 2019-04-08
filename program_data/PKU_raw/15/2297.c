main()
{
    int i,j,k,m,n,b,c,s,y=0;
    int **a;
    scanf("%d",&n);
    a=(int**)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    a[i]=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
                    if(a[i][j]==0)
                   { m=i+1;
                    k=j+1;
                    y=1;
                    break;
                    }
                    if(y==1)
                    break;
                    }
                    y=0;               
    for(i=n-1;i>=0;i--)
    for(j=n-1;j>=0;j--)
    {
                       if(a[i][j]==0)
                       {b=i+1;
                       c=j+1;
                       y=1;
                       break;
                       }
                       if(y==1)
                    break;
                       }
    s=(b-m-1)*(c-k-1);
    printf("%d",s);
    for(i=0;i<n;i++)
    {
                    free(a[i]);
                    a[i]=0;
                    }
                    free(a);
                    a=0;
    

      }
