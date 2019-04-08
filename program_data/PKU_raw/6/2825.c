int main(){
    int k,m,n;
    int a,b,c,d,s;
    a=b=c=d=0;
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        scanf("%d%d",&m,&n);
        int sz[m][n];
        for(int p=0;p<m;p++){
            for(int q=0;q<n;q++){
                scanf("%d",&sz[p][q]);
            }
        }if(m!=1&&n!=1){
        for(int e=0;e<n;e++){
            a=a+sz[0][e];
            b=b+sz[m-1][e];
        }
        for(int j=1;j<m-1;j++){
            c=c+sz[j][n-1];
            d=d+sz[j][0];
        }
        s=a+b+c+d;
        printf("%d\n",s);
        s=a=b=c=d=0;}
        else{printf("%d",sz[0][0]);}
    }return 0;
}

