main()
{
    int n,m,i,j,k;
    double a[50],c[50],p;
    char s[80];
    scanf("%d",&n);
    m=0;
    k=0;
    for(i=0;i<n;i++)
       {
         scanf("%s",&s);
         if(s[0]=='m')
           {
            scanf("%lf",&a[m]);          
            m++;
            }
         if(s[0]=='f')
           {
            scanf("%lf",&c[k]);
            k++;
            }
         }  
    for(i=0;i<m-1;i++)
       for(j=i+1;j<m;j++)
           if(a[i]>a[j])
           {
              p=a[i];
              a[i]=a[j];
              a[j]=p;
              }
    for(i=0;i<k-1;i++)
       for(j=i+1;j<k;j++)
          if(c[i]<c[j])
          {
             p=c[i];
             c[i]=c[j];
             c[j]=p;
             }         
    printf("%.2lf",a[0]);
    for(i=1;i<m;i++) printf(" %.2lf",a[i]);
    for(j=0;j<k;j++) printf(" %.2lf",c[j]);
    printf("\n");
    //getchar();
    //getchar();
    }                                                                                  
