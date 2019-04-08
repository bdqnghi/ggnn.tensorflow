int main(){
    #define H 5
    #define L 5
    int sz[H][L];
    int h,l,n,m,a,e;
    a=0;
    for(int h=0;h<H;h++){
        for(int l=0;l<L;l++){
            scanf("%d",&sz[h][l]);
        }
    }
    scanf ("%d%d",&n,&m);
    if (n<H&&m<H){
        a=1;
    }
    if(a==1){
    for(l=0;l<L;l++){
    a=sz[n][l];
    sz[n][l]=sz[m][l];
    sz[m][l]=a;
    } 
    for(h=0;h<H;h++){
        for(l=0;l<L-1;l++){
            printf("%d ",sz[h][l]);
        }
        printf("%d\n",sz[h][L-1]);
    }
    }
    else{
     printf("error");  
    }
    return 0;
}
