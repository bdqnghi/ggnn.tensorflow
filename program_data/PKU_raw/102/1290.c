main()
{
      int n,i,j=0,k=0,m;
      float a[40],d;
      char c[40][7],b[7];
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      scanf("%s",c[i]);
                      if(strcmp(c[i],"male")==0)
                      j++;
                      scanf("%f",&a[i]);
                      }
      for(i=0;i<n;i++)
      {
                      if(strcmp(c[i],"male")==0)
                      {
                                      strcpy(b,c[i]);
                                      strcpy(c[i],c[k]);
                                      strcpy(c[k],b);
                                      d=a[i];
                                      a[i]=a[k];
                                      a[k]=d;
                                      k++;
                                      }
                                      }
      for(i=0;i<j-1;i++)
      {
                        for(m=0;m<j-i-1;m++)
                        {
                                            if(a[m]>a[m+1])
                                            {
                                                           d=a[m+1];
                                                           a[m+1]=a[m];
                                                           a[m]=d;
                                                           }
                                                           }
                                                           }
      for(i=j;i<n-1;i++)
      {
                        for(m=j;m<n-i+j-1;m++)
                        {
                                              if(a[m]<a[m+1])
                                              {
                                                             d=a[m+1];
                                                             a[m+1]=a[m];
                                                             a[m]=d;
                                                             }
                                                             }
                                                             }
      printf("%.2f",a[0]);
      for(i=1;i<n;i++)
      printf(" %.2f",a[i]);

      }