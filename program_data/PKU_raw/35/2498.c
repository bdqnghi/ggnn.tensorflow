int main()
{
   int n,m,i,j,e,k,a=0,b=0;
   int sz[N][N];
   scanf("%d,%d",&n,&m);
   for(i=0;i<=n-1;i++) for(j=0;j<=m-1;j++) scanf("%d",&sz[i][j]);
   for(i=0;i<=n-1;i++) 
   {e=sz[i][0];
    for(j=0;j<=m-1;j++) if(e<sz[i][j]) e=sz[i][j];
    for(k=0;k<=m-1;k++) if(e==sz[i][k]) j=k;
    for(k=0;k<=n-1;k++) if(e<=sz[k][j]) a++;
    if(a==n) {printf("%d+%d",i,j);b=1;}
    a=0;
   }
   if(b==0) printf("No");
   return 0;
}