main()
{
      int a[1001],b[1001],i,n,t,u,j,k,s,v,f1,f2,s1,s2;
      do
      {
      scanf("%d",&n);
      if (n!=0)
      {
      for(i=0;i<n;i++)
      {
                      scanf("%d",&a[i]);
      }      
      for(i=0;i<n;i++)
      {
                      scanf("%d",&b[i]);
      }
      t=0;u=0; 
      for(j=n;j>1;j--)
      {
                      for(k=0;k<j-1;k++)
                      {
                        if(a[k+1]>a[k])
                        {
                                       t=a[k];
                                       a[k]=a[k+1];
                                       a[k+1]=t;
                        }
                        if(b[k+1]>b[k])
                        {
                                       u=b[k];
                                       b[k]=b[k+1];
                                       b[k+1]=u;
                        }
                      }
      }
      v=0;
      int f1=0;
      int f2=0;
      int s1=n-1;
      int s2=n-1;
      while(f1!=s1&&f2!=s2)
      {
      if(a[f1]>b[f2])
      {
          v +=200;
          f1++;
          f2++;
      }
      if(a[f1]<b[f2])
      {
          v -=200;
          f2++;
          s1--;     
      }
      if(a[f1]==b[f2])
      {
           if(a[s1]>b[s2])
           {
                v += 200;
                s1--;
                s2--;
           }      
           else 
           {if(a[s1]<=b[s2])
                if(a[s1]<b[f2])
                {v -=200;
                s1--;
                f2++;
                }
                else if(a[s1]==b[f2])
                {
                s1--;
                f2++;
                }
           }
      }
      }
      if(a[f1]>b[f2])
      v += 200;
      else if(a[f1]<b[f2])
      v -= 200;
      printf("%d\n",v);
      }
     }while(n!=0);
   
}
