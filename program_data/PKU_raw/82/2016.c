int main(){
    int n,i,j,c=0;
    scanf("%d",&n);
    int SZ[n][2];
    int a[1000]={0};
    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
            scanf("%d",&SZ[i][j]);
        }
    }
    for(i=0;i<n;i++){
        if(SZ[i][0]>=90&&SZ[i][0]<=140&&SZ[i][1]>=60&&SZ[i][1]<=90){
            a[c]=a[c]+1;
        }else{
            c=c+1;
        }
    }  
    int tmp=0;
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            if(a[i]>a[j]){
                tmp=a[j];
                a[j]=a[i];
                a[i]=tmp;
            }
        }
    }
    printf("%d",a[n-1]);
    return 0;
}









