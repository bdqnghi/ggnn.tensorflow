int main(){
    int a[100][6],b[100],c;
    c=0;
    for(int i=0;i<=100;i++){
            scanf("%d %d %d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4],&a[i][5]);
            c=c+1;
            if(a[i][0]==0){
                           break;}}
    for(int i=0;i<=c-2;i++){
            b[i]=a[i][5]+60*a[i][4]+3600*a[i][3]+3600*12-a[i][2]-60*a[i][1]-3600*a[i][0];
            printf("%d\n",b[i]);}
    scanf("%d %d %d %d %d %d",&a[0][0],&a[0][1],&a[0][2],&a[0][3],&a[0][4],&a[0][5]);        
    return 0;}
               