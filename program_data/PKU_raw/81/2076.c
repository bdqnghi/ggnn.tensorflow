int main(){
    int i,m,n,h,l,re;
    int jz[5][5];
    int te[5];
    for(h=0;h<5;h++){
        for(l=0;l<5;l++){
        scanf("%d",&jz[h][l]);
        }
    }
    //for(h=0;h<5;h++){
            //for(l=0;l<5;l++){
                //printf("%d ",jz[h][l]);
            //}
    //}
    scanf("%d %d",&n,&m);
    if(n>-1&&n<5&&m>-1&&m<5){
        re=1;
    }
    else{
        re=0;
    }
    //printf("%d\n ",re);
    if(re==0){
        printf("error");
    }
    else if(re==1){
        for(i=0,l=0;i<5;i++,l++){
            te[i]=jz[n][l];
        }
        for(i=0,l=0;i<5;i++,l++){
            jz[n][l]=jz[m][l];
        }
        for(i=0,l=0;i<5;i++,l++){
            jz[m][l]=te[i];
        }
        for(h=0;h<4;h++){
            for(l=0;l<4;l++){
                printf("%d ",jz[h][l]);
            }
            printf("%d\n",jz[h][4]);
        }
        for(l=0;l<4;l++){
            printf("%d ",jz[4][l]);
        }
        printf("%d",jz[4][4]);
    }
    return 0;
}
