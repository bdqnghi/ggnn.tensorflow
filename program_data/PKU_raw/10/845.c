
main()
{
      int k,i,t,m;
      int a[25],b[25];
      scanf("%d",&k);
      for(i=0;i<k;i=i+1) 
      scanf("%d",&a[i]);
      b[k-1]=1;
      for(i=k-2;i>=0;i=i-1) 
      {
      for(t=0,m=i+1;m<k;m=m+1)
      if(a[i]>=a[m]&&b[m]>t)
      t=b[m];
      b[i]=t+1;
      }
      for(i=0,t=0;i<k;i=i+1)
      if(b[i]>t)
      t=b[i];
      printf("%d",t);
    
}