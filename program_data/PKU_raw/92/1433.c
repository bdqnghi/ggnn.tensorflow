int a[1100],b[1100];
int f[1100][1100];
int i,j,k,l,m,n,xys,ysc;

int main()
{
    while (1+1==2){
          scanf("%d",&n);
          if (n==0) break;
          for (i=1;i<=n;++i) scanf("%d",&a[i]);
          for (i=1;i<=n;++i) scanf("%d",&b[i]);
          for (i=0;i<=n;++i)
              for (j=0;j<=n;++j)
                  f[i][j]=-10000000;
          sort(a+1,a+n+1);
          sort(b+1,b+n+1);
          f[0][0]=0;
          for (i=1;i<=n;++i)
              for (j=0;j<=i;++j)
                  if (j==0) f[i][j]=f[i-1][j]-200; 
                  else {
                       int cmp=0;
                       if (a[i]>b[j]) cmp=200;
                       if (a[i]<b[j]) cmp=-200;
                       f[i][j]=max(f[i-1][j]-200,f[i-1][j-1]+cmp);
                  }
                       
          int ans=-10000000;
          for (i=0;i<=n;++i)
              if (f[n][i]>ans) ans=f[n][i];
          cout<<ans<<endl;
    }
    return 0;
}
