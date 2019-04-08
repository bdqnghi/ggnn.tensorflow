main()
{
     int n,i,j,d;
     scanf("%d",&n);
     int*p=(int*)malloc(n*sizeof(int));
     int*q=(int*)malloc(n*sizeof(int));
     for(i=0;i<n;i++) scanf("%d",&p[i]);
     q[n-1]=1;
     for(i=n-2;i>=0;i--)
     {
         q[i]=1;
         d=0;
         for(j=i+1;j<n;j++)
         {
             if(p[i]>=p[j])
               if(d<q[j]) d=q[j];
         }
         q[i]=q[i]+d;
     }
     for(i=0;i<n;i++)
     if(d<q[i]) d=q[i];
     printf("%d\n",d);
}