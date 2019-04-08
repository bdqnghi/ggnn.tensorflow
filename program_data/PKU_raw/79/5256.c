main()
{
      int m=1,n=1,x,a[300];
      while(m!=0 || n!=0)
      {
                 scanf("%d %d",&n,&m);
                 if(m!=0 || n!=0)
                 {
                         x=n;
                         int i;
                         for(i=0;i<300;i++)
                         a[i]=0;
                         int k=0,l=1;
                         while(x!=0)
                         {
                                    if(k>=n)
                                    k=0;
                                    if(l>m)
                                    l=1;
                                    while(k<n && l<=m)
                                    {
                                              if(a[k]!=m)
                                              {
                                                         a[k]=l;
                                                         if(l==m)
                                                         x=x-1;
                                                         if(x==0)
                                                         {
                                                                 printf("%d\n",k+1);
                                                                 break;
                                                         }        
                                                         l++;
                                                         
                                              }
                                              k++;
                                              if(m==0)
                                              break;
                                    }
                         }
                 }
                 
      }
      getchar();
      getchar();
}
