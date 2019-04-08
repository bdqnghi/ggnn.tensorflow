int main(){
    int n;
    int m,c[100][100];
    cin>>n;
    char a[100][100],b[100][100];
    memset(b,-1,sizeof(b));
    memset(c,-1,sizeof(c));
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                    cin>>a[i][j];
                    if(a[i][j]=='.') b[i][j]=0;
                    else if(a[i][j]=='@') b[i][j]=1;
                    else if(a[i][j]=='#') b[i][j]=-1;
                    c[i][j]=b[i][j];
            }
    }
    
    int dx[]={1,0,-1,0},
        dy[]={0,1,0,-1};
    cin>>m;
    int num=0;
    for(int i=1;i<m;i++){
            for(int j=1;j<=n;j++){
                    for(int k=1;k<=n;k++){
                            if(b[j][k]==1) {
                                           for(int x=0;x<4;x++){
                                                           if(c[j+dx[x]][k+dy[x]]!=-1) c[j+dx[x]][k+dy[x]]=1;
                                                           
                                                   }
                                           }
                            }
                    }
                    for(int j=1;j<=n;j++){
                            for(int k=1;k<=n;k++){
                                    b[j][k]=c[j][k];
                                    }
                    }
    }
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                    if(c[i][j]==1) num++;
            }
            
    }
    cout<<num;
    return 0;
}
