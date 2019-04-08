void main()
{  int n=0,m,f,i,j=-1,l1,l2;char q[10000],w[10000];int a[1000]={0},b[1000]={0};int c[1000]={0},k,flag=0;
   scanf("%s",q);
   scanf("%s",w);
   l1=strlen(q);l2=strlen(w);
   for(k=0;k<l1;k++)
        for(j=j+1;j<l1;j++)
       {
           if(q[j]<'0'||q[j]>'9')  {flag++;break;}
           else a[k]=a[k]*10+q[j]-'0';
       }
   f=flag+1;j=-1;
   for(k=0;k<l2;k++)
        for(j=j+1;j<l2;j++)
       {
           if(w[j]<'0'||w[j]>'9')  break;
           else b[k]=b[k]*10+w[j]-'0';
       }

   int min=a[0],max=a[0];
   for(j=0;j<f;j++)
      {
          if(a[j]<min)  min=a[j];
          if(a[j]>max)   max=a[j];
      }
   for(j=0;j<f;j++)
      {
          if(b[j]<min)  min=b[j];
          if(b[j]>max)   max=b[j];
      }
   for(k=min;k<max;k++)
        {
            for(j=0;j<f;j++)
               {
                   if(a[j]<k&&k<b[j]) {c[k]++;}
                   else if(a[j]==k)  {c[k]++;}
               }

        }

    i=c[min];
    for(j=min+1;j<max;j++)
        {
            if(c[j]>i)  i=c[j];
        }

    printf("%d %d",f,i);
    }
