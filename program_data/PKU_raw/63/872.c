int main()
{
    int m,n,p,i,j,k;
    int a[101][101],b[101][101],c[101][101];
    
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
       for(j=1;j<=n;j++)
          scanf("%d",&a[i][j]);
    
    scanf("%d%d",&n,&p);   
    for(i=1;i<=n;i++)
       for(j=1;j<=p;j++)
          scanf("%d",&b[i][j]);
    
    for(i=1;i<=m;i++)
       for(j=1;j<=p;j++)
       {
          c[i][j]=0;
          for(k=1;k<=n;k++)
             c[i][j]+=a[i][k]*b[k][j];
       } 
    
    for(i=1;i<=m;i++)
    {
       for(j=1;j<p;j++)
          printf("%d ",c[i][j]);
        printf("%d\n",c[i][p]);   
    }   
    
    return 0;
}