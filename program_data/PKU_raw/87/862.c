int main(){
    int a[10000][6],b[10000][3],i,j,t,sum[10000];
for(i=0;i<10000;i++){
    t=0;
    for(j=0;j<6;j++){
    scanf("%d",&a[i][j]);
    if(a[i][j]==0) t++;
}
if(t==6) break;
} 
    for(i=0;i<10000;i++){
        if(a[i][0]==0&&a[i][1]==0&&a[i][2]==0&&a[i][3]==0&&a[i][4]==0&&a[i][5]==0) break;
        for(j=2;j>0;j--){
            if(a[i][j+3]>=a[i][j]) b[i][j]=a[i][j+3]-a[i][j];
            else {b[i][j]=a[i][j+3]-a[i][j]+60;
                 a[i][j+2]=a[i][j+2]-1;}
        }
        b[i][0]=a[i][3]+12-a[i][0];
        sum[i]=b[i][0]*3600+b[i][1]*60+b[i][2];
        printf("%d\n",sum[i]);
    }
    return 0;
}

