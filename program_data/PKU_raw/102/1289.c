int comparemale(const void*x,const void*y)
{
    int *p1=(int*)x;
    int *p2=(int*)y;
    return (*p1)-(*p2);
}
main()
{
      int n,i,j,k;
      char c[300]={'\0'};
      float a[50]={0},m[40]={0},s[40]={0};
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      scanf("%s %f",&c[7*i],&a[i]);
      }
      for(i=0,j=0,k=0;i<n;i++)
      {
                      if(c[7*i]=='m')
                      {
                                     m[j]=a[i];
                                     j++;
                      }
                      if(c[7*i]=='f')
                      {
                                     s[k]=a[i];
                                     k++;
                      }
      }
      qsort(m,j,sizeof(float),comparemale);
      qsort(s,k,sizeof(float),comparemale);
      for(i=0;i<j;i++)printf("%.2f ",m[i]);
      for(i=k-1;i>-1;i--)
      {
                        if(i==0)printf("%.2f",s[0]);
                        else printf("%.2f ",s[i]);
      }
}   