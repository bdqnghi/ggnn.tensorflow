int*order(int*p,int k)
{     
       int i,j;
       int t=0;
       p=(int*)malloc(k*sizeof(int));
       for(i=0;i<k;i++)
       {
           scanf("%d",&p[i]);
       }
       for(i=k-1;i>=0;i--)
       {
           for(j=0;j<i;j++)
               {
                   if(p[j]>p[j+1])
                   {
                    t=p[j+1];
                    p[j+1]=p[j];
                    p[j]=t;
                   }
               }
       }
       return p;
}
int*merge(int*p,int*q,int m,int n)
{
       int i;
       int*u=(int*)malloc((m+n)*sizeof(int));
       for(i=0;i<m;i++)
       {
            u[i]=p[i];
       }
       for(i=0;i<n;i++)
       {
            u[m+i]=q[i];
       }
       return u;
}
main()
{
      int m,n;
      scanf("%d %d",&m,&n);
      int*a=(int*)malloc(m*sizeof(int));
      int*b=(int*)malloc(n*sizeof(int));
      a=order(a,m); 
      b=order(b,n);
      int*p=merge(a,b,m,n);
      printf("%d",p[0]);
      for(int i=1;i<m+n;i++)
      {
        printf(" %d",p[i]);
      }
}
