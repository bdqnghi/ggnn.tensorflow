main()
{
      int n,i,j,k,t;
      char s[7];
      double a[40],b[40],p;
      scanf("%d",&n);
      j=0;
      k=0;
      for (i=0;i<n;i++)
      {
          scanf("%s",s);
          if(strcmp(s,"male")==0)
          {
              scanf("%lf",&a[j]);
              j++;
          }
          if(strcmp(s,"female")==0)
          {
              scanf("%lf",&b[k]);
              k++;
          }
      }
      for (i=j-1;i>0;i--)
      {
          for (t=0;t<i;t++)
          {
              if (a[t]>a[t+1])
              {
                  p=a[t];
                  a[t]=a[t+1];
                  a[t+1]=p;
              }
          }
      }
      for (i=k-1;i>0;i--)
      {
          for (t=0;t<i;t++)
          {
              if (b[t]<b[t+1])
              {
                  p=b[t];
                  b[t]=b[t+1];
                  b[t+1]=p;
              }
          }
      }
      for (i=0;i<j;i++)
      printf("%.2f ",a[i]);
      for (i=0;i<k;i++)
      {
          if (i==k-1) printf ("%.2f",b[k-1]);
          else printf ("%.2f ",b[i]);
      }
}
