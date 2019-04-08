int main(){
    int t,m,n,i,j,f[NUM][NUM];
    for(i=1;i<NUM;++i)f[0][i]=1,f[i][0]=0;
    for(i=1;i<NUM;++i)
        for(j=1;j<NUM;++j)
            if(i<j)f[i][j]=f[i][j-1];
            else f[i][j]=f[i-j][j]+f[i][j-1];

    cin>>t;
    while(t--){
        cin>>m>>n;
        cout<<f[m][n]<<endl;
    }
}