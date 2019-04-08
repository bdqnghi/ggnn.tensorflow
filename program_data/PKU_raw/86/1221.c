int main()
{
    int s[200]={0},f[200]={0}, n, m[200]={0}, i, j,count=0;
    cin >> n;
    for (i=1;i<=n;i++)
    {
         for (j=1;j<=199;j++) s[j]=1;
         memset(f,0,sizeof(f));
         count=0;
         cin >> m[i];
         for (j=1;j<=m[i];j++)
         {
             cin >> f[j];
             s[f[j]-2+3*j]=0;
             s[f[j]-1+3*j]=0;
             s[f[j]+3*j]=0;
         }
         for (j=1;j<=60;j++) count=count+s[j];
         cout << count << endl;
    }
    return 0;
}          
