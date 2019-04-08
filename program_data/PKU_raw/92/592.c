void paixu(int *a,int n)
{
     int i,j,maxj,temp;
     for(i=0;i<n-1;i++)
     {maxj=i;
       for(j=i+1;j<n;j++)
          maxj=a[j]>a[maxj]?j:maxj;
       temp=a[i];
       a[i]=a[maxj];
       a[maxj]=temp;
     }
 }
int max(int x,int y)
{
    return x>y?x:y;
}
main()
{
      int k,n,i,j,t[1000],q[1000],f[1005][1005];
      for(;;)
      {
             scanf("%d",&n);
             if(n==0) break;
             for(i=0;i<n;i++)
               scanf("%d",&t[i]);
             for(i=0;i<n;i++)
               scanf("%d",&q[i]);
             paixu(t,n);
             paixu(q,n);
             memset(f,-5,sizeof(f));
             f[0][0]=0;
             for(i=0;i<n;i++)
               for(j=0;j<=i;j++)
            { if(t[j]>q[i])  f[i+1][j+1]=max(f[i+1][j+1],f[i][j]+200);
             else if(t[j]==q[i])  { f[i+1][j+1]=max(f[i+1][j+1],f[i][j]); f[i+1][j]=max(f[i+1][j],f[i][j]-200);}
             else f[i+1][j]=max(f[i+1][j],f[i][j]-200);
             }
             k=f[n][0];
             for(j=1;j<=n;j++)
               k=f[n][j]>k?f[n][j]:k;
             printf("%d\n",k);
      }
    
      return 0;
}
