main()
{
    int a[1000];
    int b[1000];
    int c[1000];
    int i,j,k,l,n;
    int t,s,p,m;
    int count=0;
    int y;
    int sum;
    for(i=0;;i++)
    {
       sum=0;
       scanf("%d",&n);
       if(n==0)
       {
            break;
       }
       count++;
       for(j=0;j<=n-1;j++)
       {
          scanf("%d",&a[j]);
       }
       for(k=0;k<=n-1;k++)
       {
          scanf("%d",&b[k]);
       }
       for(j=0;j<=n-1;j++)
       {
          t=a[j];
          s=b[j];
          for(k=j+1;k<=n-1;k++)
          {
             if(a[k]<t)
             {
                a[j]=a[k];
                a[k]=t;
                t=a[j];
             }
             if(b[k]<s)
             {
                b[j]=b[k];
                b[k]=s;
                s=b[j];
             }
          }
       }
       for(j=0;j<n;j++)
       {
           if(b[j]<a[j])
           {
               sum=sum+200;
               continue;
           }
            else if(b[n-1]<a[n-1])   
           {
               sum=sum+200;
               for(k=n-1;k>j;k--)
               {
                   a[k]=a[k-1];
                   b[k]=b[k-1];
               }
               continue;
           }
        else
        {
            if(b[n-1]>a[j])
            {sum=sum-200;}
            for(k=n-1;k>j;k--)
            {
                 b[k]=b[k-1];
            }
        }
    }
     c[i]=sum;
}
    for(i=0;i<=count-1;i++)
    {
        printf("%d\n",c[i]);
    }
    getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar(); 
}
