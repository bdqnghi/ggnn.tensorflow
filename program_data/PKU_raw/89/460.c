int main()
{
   int n,a[100000],b[100000],i,j,m,s,k,p,v;
   scanf("%d",&n);
   for(i=0;;i++)
   {
      scanf("%d %d",&a[i],&b[i]);  
      if(a[i]==0&&b[i]==0)break;
      }
      i=i-1;
      v=0;
   for(j=0;j<=i;j++)
   {
                    m=b[j];
                    s=0;
                    for(k=0;k<=i;k++)
                    { 
                                     if(b[k]==m)
                                     s=s+1;
                                     }
                    if(s==n-1)
                    {
                              for(p=0;p<=i;p++)
                              {
                                               if(a[p]==m)break;
                                               }
                              if(p==i+1)
                              {
                                v=1;
                                printf("%d",m);
                                break;
                                }
                    }
   }
   if(v==0)
   printf("NOT FOUND");
   getchar();
   getchar();
}
