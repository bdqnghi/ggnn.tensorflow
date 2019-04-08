int main(){
    int k,m,n,a,b,i;
    int h,s,t,p;
    int sz[100][100],result[100];
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%d %d",&n,&m);
        for(a=0;a<n;a++){
            for(b=0;b<m;b++){
                scanf("%d",&sz[a][b]);
            }
        }
        h=0,s=0,t=0,p=0;
        for(b=0;b<m;b++){
            h=h+sz[0][b];
            if(n>1){
            s=s+sz[n-1][b];
            }
        }
        for(a=1;a<n-1;a++){
            t=t+sz[a][0];
            if(m>1){
            p=p+sz[a][m-1];
            }
        }
        result[i]=h+s+t+p;
    }
    for(i=0;i<k;i++){
        printf("%d\n",result[i]);
    }
    return 0;
}

