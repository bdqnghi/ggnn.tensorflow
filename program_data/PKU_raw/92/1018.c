int Compare(const void* elem1,const void* elem2)
{
    int *p1,*p2;
    p1=(int*) elem1;
    p2=(int*) elem2;
    return (*p2)-(*p1);
}
main()
{
    int n,i=0,j=0,k=0,m=0,r=0;
    int a[1100];
    int b[1100];
    int c[1100]={0};
    int d[1100];
    scanf("%d",&n);
   while (n!=0)
   {
       for(i=0;i<=n-1;i++)
       {
           scanf("%d",&a[i]);
       }
       for(j=0;j<=n-1;j++)
       {
           scanf("%d",&b[j]);
       }
       qsort(a,n,sizeof(int),Compare);
       qsort(b,n,sizeof(int),Compare);
       for(i=0;i<=n-1;i++)
       {
           for(k=0;k<=n-1;k++)
           {
               if(a[k]>b[k])
               {
                  m=m+1;
               }
               if(a[k]==b[k])
               {
                  m=m+0;
               }
               if(a[k]<b[k])
               {
                  m=m-1;
               }
           }
           c[i]=m;
           m=0;
           for(j=n-1;j>=0;j--)
           {
               a[j+1]=a[j];
           }
           a[0]=a[n];
       }
       qsort(c,n,sizeof(int),Compare);
       d[r]=c[0]*200;
       r++;
       scanf("%d",&n);
   }
   for(i=0;i<=r-1;i++)
   {
       printf("%d\n",d[i]);
   }
}
