
int compare(const void *elem1,const void *elem2)
{
    return *(float *)elem1>*(float *)elem2 ?1:-1; 
} 


main()
{
      int n,i,k1,k2,j1,j2;
      k1=k2=j1=j2=0;
      scanf("%d",&n);
      char p1[10]={'m','a','l','e','\0'}; 
      char p2[10]={'f','e','m','a','l','e','\0'};
      
      char a[n][10];
      float b[n];
      float *c,*d;
      for(i=0;i<n;i++)
      {
                      scanf("%s",&a[i]);
                      scanf("%f",&b[i]);
      }

      
      
      for(i=0;i<n;i++)
      {
                      if(strcmp(a[i],p1)==0)
                      {
                            k1++;
                      }                          
                      else if(strcmp(a[i],p2)==0)
                      {
                            k2++;
                      }
      }
      c=(float *)malloc(k1*sizeof(float));
      d=(float *)malloc(k2*sizeof(float));
      for(i=0;i<n;i++)
      {
                      if(strcmp(a[i],p1)==0)
                      {
                            c[j1]=b[i];
                            j1++;
                      }                          
                      else if(strcmp(a[i],p2)==0)
                      {
                            d[j2]=b[i];
                            j2++;
                      }
      }
      qsort(c,k1,sizeof(float),compare);
      qsort(d,k2,sizeof(float),compare);
      
      printf("%.2f",c[0]);
      for(i=1;i<k1;i++)printf(" %.2f",c[i]);
      for(i=k2-1;i>=0;i--)printf(" %.2f",d[i]);
      
     
}
