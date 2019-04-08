int main(){
    int n;
    scanf("%d",&n);
    int a[30];
    int b[30][100];
    for(int i=0;i<=29;i++){
            b[i][1]=1;
            b[i][2]=1;}
    for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if((a[i]==1)||(a[i]==2)){
                                 printf("%d\n",b[i][a[i]]=1);}
            else{
                 for(int j=3;j<=a[i];j++){
                     b[i][j]=b[i][j-1]+b[i][j-2];
                    }
                   printf("%d\n",b[i][a[i]]); }
            }
            scanf("%d",&n);
    return 0;}
