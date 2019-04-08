struct dian
{
   int h;
   int x;
};
int Compare(const void*elem1,const void*elem2)
{
    struct dian *p1,*p2;
    p1=(struct dian*)elem1;
    p2=(struct dian*)elem2;
    return (*p2).h-(*p1).h;
}
main()
{
      int n,i,j,k;
      scanf("%d",&n);
      struct dian *d = (struct dian *)malloc(sizeof(struct dian)*(n));
      int *a= (int*)malloc(sizeof(int)*(n));
      for(i=0;i<n;i++)
      a[i]=1;
      for(i=0;i<n;i++)
      {
                        scanf("%d",&d[i].h);
                        d[i].x=i;
      }
      qsort(d,n,sizeof(struct dian),Compare);
      for(i=n-2;i>=0;i--)
      {
              for(j=i+1;j<n;j++)
              {
                           if(d[i].h==d[j].h&&d[i].x>d[j].x)
                           {
                                                            struct dian c;
                                                            c.x=d[i].x;
                                                            d[i].x=d[j].x;
                                                            d[j].x=c.x;
                           }
             }
     }                   
      for(i=n-2;i>=0;i--)
      {
              for(j=i+1;j<n;j++)
              {
                           if(d[i].x<d[j].x)
                           {
                                    if(a[i]<a[j]+1)
                                       a[i]=a[j]+1;
                           }
             }
     }                   
      int max=a[0];
      for(k=0;k<n;k++)
      { 
                        if(a[k]>max)
                        max=a[k];
       }                                 
      printf("%d",max);
      free(d);
      free(a);
      getchar();
      getchar();
      getchar();
}
