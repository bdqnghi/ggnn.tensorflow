int main(){
    int k,m,n,i,a,b;
    scanf("%d",&k);
    int s[k];
    for(i=0;i<k;i++){
        s[i]=0;
    }
    for(i=0;i<k;i++){
        scanf("%d%d",&m,&n);
        int sz[m][n];
        for(a=0;a<m;a++){
            for(b=0;b<n;b++){
                scanf("%d",&sz[a][b]);
            }
        }
        for(b=0;b<n;b++){
            s[i]=s[i]+sz[0][b];
        }
        for(a=1;a<m-1;a++){
            s[i]=s[i]+sz[a][0];
            s[i]=s[i]+sz[a][n-1];
        }
        if(m!=1){
            for(b=0;b<n;b++){
                s[i]=s[i]+sz[m-1][b];
            }
        }
    }
    for(i=0;i<k;i++){
        printf("%d\n",s[i]);
    }
    return 0;
}

