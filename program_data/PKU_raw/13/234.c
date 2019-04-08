main()
{
      int n,k,m,j,i;
      scanf("%d",&n);
      int a[n];
      for(k=0;k<n;k++)
      scanf("%d",&a[k]);
      for(i=0;i<n;i++)
      {
             m=0;
             for(j=0;j<i;j++)
             {
                   if(a[j]==a[i])
                   {m+=1;break;}
             }
             if(m==0)
             {
                     if(i!=0)
                     printf(" ");
                     printf("%d",a[i]);
             }
             
      }
      
}
