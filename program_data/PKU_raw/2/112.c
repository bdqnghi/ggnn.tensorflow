int main()
{
    int m,i,j,a[1000],c[91]={0},k,n,p=0;
    char b[1000][26],q;
    scanf("%d", &m);
    for(i=1;i<=m;i++)
    {
                     scanf("%d%s", &a[i], b[i]);
                     n=strlen(b[i]);
                     for(j=0;j<=n-1;j++)
                     {
                                        k=b[i][j];
                                        c[k]++;
                     }
    }
    for(i=65;i<91;i++) if(c[i]>p) {p=c[i]; q=i;}
    printf("%c\n%d\n", q, p);
    for(i=1;i<=m;i++)
    {
                     n=strlen(b[i]);
                     for(j=0;j<=n-1;j++) if(b[i][j]==q) printf("%d\n", a[i]);
    }
    return 0;
}
