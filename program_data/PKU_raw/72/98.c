
int main()
{
    int m,n;
    int h[22][22];
    cin>>m>>n;
    int i,j;
    for(i=0;i<=n+1;i++) h[0][i]=h[m+1][i]=0;
    for(j=1;j<=m;j++)
    { h[j][0]=h[j][n+1]=0;
    for(i=1;i<=n;i++) cin>>h[j][i];}
    
    for(j=1;j<=m;j++)
    for(i=1;i<=n;i++)
    if(h[j][i]>=h[j-1][i]&&h[j][i]>=h[j+1][i]&&h[j][i]>=h[j][i+1]&&h[j][i]>=h[j][i-1])
    cout<<j-1<<" "<<i-1<<"\n";
}
    
    
