int main(){
    int i,nanshu=0,nvshu=0,k,zongrenshu;
    double shengao;
    scanf("%d",&zongrenshu);
    double nanshengao[zongrenshu],nvshengao[zongrenshu],zhongjianliang;
    char xingbie[7],nv[7]="female",nan[5]="male";
    for(i=0;i<zongrenshu;i++){
        scanf("%s %lf",xingbie,&shengao);
        if(strcmp(xingbie,nv)==0){
            nvshengao[nvshu]=shengao;
            nvshu++;
        }else{
            nanshengao[nanshu]=shengao;
            nanshu++;
        }
    }
    for(i=1;i<=nanshu;i++){
        for(k=0;k<(nanshu-i);k++){
            if(nanshengao[k]>nanshengao[k+1]){
                zhongjianliang=nanshengao[k+1];
                nanshengao[k+1]=nanshengao[k];
                nanshengao[k]=zhongjianliang;
            }
        }
    }
    for(i=1;i<=nvshu;i++){
        for(k=0;k<(nvshu-i);k++){
            if(nvshengao[k]<nvshengao[k+1]){
                zhongjianliang=nvshengao[k+1];
                nvshengao[k+1]=nvshengao[k];
                nvshengao[k]=zhongjianliang;
            }
        }
    }
    for(i=0;i<nanshu;i++){
        printf("%.2lf ",nanshengao[i]);
    }
    for(i=0;i<(nvshu-1);i++){
        printf("%.2lf ",nvshengao[i]);
    }
    printf("%.2lf",nvshengao[nvshu-1]);
    return 0;
}
