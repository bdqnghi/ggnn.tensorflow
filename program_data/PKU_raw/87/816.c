int main(){
    int a[20][6],j,i,SUM[11],n;
    for(i=0;i<100;i++){
        for(j=0;j<6;j++){
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<100;i++){
        if(a[i][0]==0){
            n=i;
            break;
        }
    }
    for(i=0;i<n;i++){
        SUM[i]=(60-a[i][2]+a[i][5])+(60-a[i][1]-1)*60+a[i][4]*60+(12-1-a[i][0])*3600+a[i][3]*3600;
    }
    for(i=0;i<n;i++){
        printf("%d\n",SUM[i]);
    }
    return 0;
}
