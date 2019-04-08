int main()
{
    int i,j,k,l,m,n,y,o,p,z,a[100][100],b[100][100],c[100][100];
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
                     for(j=0;j<n;j++)
                     {
                                     scanf("%d",&a[i][j]);
                     }
    }
    scanf("%d %d",&o,&p);
    for(i=0;i<o;i++)
    {
                     for(j=0;j<p;j++)
                     {
                                     scanf("%d",&b[i][j]);
                     }
    }
    for(i=0;i<m;i++)
    {
                    for(j=0;j<p;j++)
                    {
                                    c[i][j]=0;
                                    for(k=0;k<n;k++)
                                    {
                                                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                                    }
                                    if(j==p-1) printf("%d\n",c[i][j]);
                                    else printf("%d ",c[i][j]);
                    }
    }

}
