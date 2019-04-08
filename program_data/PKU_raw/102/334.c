int compare1(const void *elem1,const void *elem2)
{
    float *p1,*p2;
    p1=(float *)elem1;
    p2=(float *)elem2;
    if(*p1-*p2<0) return -1;
    else if(*p1-*p2>0) return 1;
    else return 0;
}
int compare2(const void *elem1,const void *elem2)
{
    float *p1,*p2;
    p1=(float *)elem1;
    p2=(float *)elem2;
    if(*p1-*p2<0) return 1;
    else if(*p1-*p2>0) return -1;
    else return 0;
}
main()
{
      int n,i=0,g,j=0,a,b;
      char c[100];
      float m[100],f[100];
      float h;
      scanf("%d",&n);
      for(g=0;g<n;g++)
      {
                      scanf("%s %f",c,&h);
                      if(c[0]=='m') 
                      {
                                    m[i]=h;
                                    i++;
                      }
                      else 
                      {
                           f[j]=h;
                           j++;
                      }
      }
      a=i;
      b=j;
      qsort(m,a,sizeof(float),compare1);
      qsort(f,b,sizeof(float),compare2);
      for(i=0;i<a;i++)
      {
                       if(i==0) printf("%.2f",m[i]);
                       else printf(" %.2f",m[i]);
      }
      for(j=0;j<b;j++)
      {
                       printf(" %.2f",f[j]);
      }
      
}
