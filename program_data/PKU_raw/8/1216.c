int compare(const void * elem1, const void * elem2)
{
      return (*(int *)elem1) - (*(int *) elem2);
}
main()
{
      int n,m;
      scanf("%d %d",&n,&m);
      int a[n],b[m];
      int i,j;
      for(i=0;i<n;i++)
            { scanf("%d",&a[i]);}
      for(i=0;i<m;i++)
             {scanf("%d",&b[i]);}
      qsort(a,n,sizeof(int),compare);
      qsort(b,m,sizeof(int),compare);
      int c[n+m];
      for(i=0;i<n;i++)
      {
                        c[i]=a[i];}
      for(i=n,j=0;i<m+n;i++,j++)
      {
                      c[i]=b[j];}
      for(i=0;i<n+m-1;i++)
       {
                        
                        printf("%d ",c[i]);}
                        printf("%d\n",c[i]);
     
}
