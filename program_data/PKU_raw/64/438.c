int main()
{
    int i,n,k,p=0,f;
    int c[100],d[100];
    int a[100][50];
    double b[200],q,e;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%d",&a[i][0]);
                    scanf("%d",&a[i][1]);
                    scanf("%d",&a[i][2]);
    }
    for(i=0;i<n;i++)
    {
                    for(k=i+1;k<n;k++)
                    {
                                      q=(a[i][0]-a[k][0])*(a[i][0]-a[k][0])+(a[i][1]-a[k][1])*(a[i][1]-a[k][1])+(a[i][2]-a[k][2])*(a[i][2]-a[k][2]);
                                      b[p]=sqrt(q);
                                      c[p]=i;
                                      d[p]=k;
                                      p++;
                    }
    }
    for(i=1;i<=p;i++)
    {
                    for(k=0;k<p-i;k++)
                    {
                                      if(b[k+1]>b[k])
                                      {
                                                     e=b[k+1];
                                                     b[k+1]=b[k];
                                                     b[k]=e;
                                                     f=c[k+1];
                                                     c[k+1]=c[k];
                                                     c[k]=f;
                                                     f=d[k+1];
                                                     d[k+1]=d[k];
                                                     d[k]=f;
                                      }
                    }
    }
    for(i=0;i<p;i++)
    {
                    printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[c[i]][0],a[c[i]][1],a[c[i]][2],a[d[i]][0],a[d[i]][1],a[d[i]][2],b[i]);
    }
    return 0;
}