
int main(){
    int n,m;
    int a[22][22]={0};

    scanf("%d %d",&m,&n);
    for(int i=1;i<m+1;i++){
        for(int t=1;t<n+1;t++){
            scanf("%d",&a[i][t]);}}
    for(int p=1;p<m+1;p++){
        for(int q=1;q<n+1;q++){ 
            if(a[p][q]>(a[p-1][q]-1)&&a[p][q]>(a[p+1][q]-1)&&a[p][q]>(a[p][q-1]-1)&&a[p][q]>(a[p][q+1]-1)){           
  printf("%d %d\n",p-1,q-1);}}}
                return 0;

}