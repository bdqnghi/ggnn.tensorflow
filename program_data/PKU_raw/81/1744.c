int h(int x,int y);
int main(){
    int a[5][5],m,n,i,j,s,b[5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&(a[i][j]));
        }
    }
    scanf("%d%d",&n,&m);
    s=h(n,m);
    if(s==0)printf("error");
    else {
        for(i=0;i<5;i++){
            b[i]=a[n][i];
            a[n][i]=a[m][i];
            a[m][i]=b[i];
        }
        for(i=0;i<5;i++){
            printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
        }
    }
    return 0;
}
int h(int x,int y){
    if(x>=0 && x<5 && y>=0 && y<5)return 1;
    else return 0;
}