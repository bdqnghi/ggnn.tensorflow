int main(){
    int t,m,n,f[101][101],i,j;
    for(i=1;i<101;++i)f[i][0]=0,f[0][i]=1;
    for(i=1;i<101;++i)
        for(j=1;j<101;++j)
            if(i<j)f[i][j]=f[i][j-1];
            else f[i][j]=f[i-j][j]+f[i][j-1];
    cin>>t;
    while(t--){
        cin>>m>>n;
        cout<<f[m][n]<<endl;
    }
}
