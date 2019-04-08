int main(){
    int n,m,a,b,i,s=0;
    char p[200][200];
    char q[200][200];
    scanf("%d",&n);
    for(a=1;a<n+1;a++){
        for(b=1;b<n+1;b++){
            scanf(" %c",&p[a][b]);
            q[a][b]=p[a][b];
        }
    }
    scanf("%d",&m);
    for(i=0;i<n+2;i++){p[0][i]='#';p[n+1][i]='#';p[i][0]='#';p[i][n+1]='#';}
    for(i=1;i<m;i++){
        for(a=1;a<n+1;a++){
            for(b=1;b<n+1;b++){if(p[a][b]!='#'){
                if(p[a-1][b]=='@'||p[a+1][b]=='@'||p[a][b-1]=='@'||p[a][b+1]=='@'){
                    q[a][b]='@';
                } }
            }
        }
        for(a=1;a<n+1;a++){
            for(b=1;b<n+1;b++){p[a][b]=q[a][b];}
        }
    }
    for(a=1;a<n+1;a++){for(b=1;b<n+1;b++){if(p[a][b]=='@'){s=s+1;}}}
    printf("%d",s);
    return 0;
}
