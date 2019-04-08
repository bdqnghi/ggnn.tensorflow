

main()
{
      int n,i,m,j;
      int a[25],b[25];
      m=0;
      
      scanf("%d",&n);
      for(i=n-1;i>=0;i--)
      {scanf("%d",&a[i]);
      b[i]=1;}
      
      for(j=1;j<n;j++)
      {
      for(i=0;i<j;i++)
      {
      if(a[j]>=a[i])
      {if((b[i]+1)>=b[j])
      b[j]=b[i]+1;}
      }
      }
      
      for(i=0;i<n;i++)
      {
      if(b[i]>=m)
      m=b[i];}
      
      printf("%d",m);
      


}


               
                    
