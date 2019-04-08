int reverse(int num)
{
    if(num==0)
    return 0;
    else
    {
    if(num>0)
    {
    int b,x=1,y=0,i,j,k,n=0;
    b=num;
    for(i=1;;i++)
    {
                 if(b%10==0)
                 y++;
                 else
                 break;
                 b=b/10;
                 }
                 b=num;
    for(i=1;;i++)
    {
                 if(b/10!=0)
                 x++;
                 else
                 break;
                 b=b/10;
                 }
                 b=num;
    int a[x],c[x];
    for(j=0;j<x;j++)
    {
                    a[j]=b;
                    b=b/10;
                    }
                    int e;
    for(k=y;k<x;k++)
    {
                    c[k]=a[k]%10;
                    e=x-k-1;
                    n+=c[k]*pow(10,e);
                    }
                    return n;
                    }
                    else
    {
    
    int b,x=1,y=0,i,j,k,n=0;
    b=-num;
    for(i=1;;i++)
    {
                 if(b%10==0)
                 y++;
                 else
                 break;
                 b=b/10;
                 }
                 b=-num;
    for(i=1;;i++)
    {
                 if(b/10!=0)
                 x++;
                 else
                 break;
                 b=b/10;
                 }
                 b=-num;
    int a[x],c[x];
    for(j=0;j<x;j++)
    {
                    a[j]=b;
                    b=b/10;
                    }
                    int e;
    for(k=y;k<x;k++)
    {
                    c[k]=a[k]%10;
                    e=x-k-1;
                    n+=c[k]*pow(10,e);
                    }
                    return (-n);
                    }
                    } 
    }
main()
{
      int n,a,b=1;
      for(b=1;b<=6;b++)
      {
      scanf("%d",&n);
      a=reverse(n);
      printf("%d\n",a);
      }
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      }
