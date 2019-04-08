main()
{
  int m,n,i,j,k,p,q,r,s,t,u,w,x,a[1000],b[1000],c[1000];
  int v=0;
  do
    {
      scanf("%d",&m);
      for(i=0;i<=m-1;i++)
        scanf("%d",&a[i]);
      for(j=0;j<=m-1;j++)
        scanf("%d",&b[j]);
      for(k=0;k<=m-1;k++)
        {
          for(p=0;p<=m-2-k;p++)
           {
            if(a[p]<a[p+1])
            {
              u=a[p+1];
              a[p+1]=a[p];
              a[p]=u;               
            }
           }                   
        }
      for(s=0;s<=m-1;s++)
        {
          for(t=0;t<=m-2-s;t++)
           {
            if(b[t]<b[t+1])
            {
              u=b[t+1];
              b[t+1]=b[t];
              b[t]=u;               
            }
           }                   
        }
             
      for(n=0;n<=m-1;n++)
      {
        for(p=0;p<=m-1-n;p++)
         {
          c[n+p]=a[p];
         }
        for(r=0;r<=n-1;r++)
         c[r]=a[p+r];

        for(q=0;q<=m-1;q++)
         {
         if(b[q]>c[q])
         v=v-200;
         else if(b[q]<c[q])
         v=v+200;
         
         }
        if(n!=0&&v>w)
        w=v;
        else if(n==0)
        w=v;
        else if(n==(m-1)/2+1)
        break;
        v=0;
      }
      if(m!=0)
      printf("%d\n",w);
      v=0;
 }
 while(m!=0);
}