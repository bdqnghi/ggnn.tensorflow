int a[5][5];
    int m,n;
int jh(int a[5][5],int m,int n){
    int c;
    if(m>4||m<0||n>4||n<0){
                           printf("error");}
    else{
         for(int j=0;j<=4;j++){
                 c=a[m][j];
                 a[m][j]=a[n][j];
                 a[n][j]=c;}
         for(int i=0;i<=4;i++){
            for(int j=0;j<=3;j++){
                    printf("%d ",a[i][j]);}
            printf("%d\n",a[i][4]);}}
    return 0;
    }
int main(){
    for(int i=0;i<=4;i++){
            for(int j=0;j<=4;j++){
                    scanf("%d",&a[i][j]);}}
    scanf("%d %d",&m,&n);
    jh(a,m,n);
    int y;
    scanf("%d",&y);
    return 0;}
