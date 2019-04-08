int main(){
    int n,m,k,r,i;
    scanf("%d%d",&n,&k);
    for(r=1;r<1000000;r++){
        m=r*(n-1);
        for(i=1;i<=n;i++){
            if(m%(n-1)==0){
                m=m*n/(n-1)+k;
            }
            else{
                break;
            }
            if(i==n){
                goto end;
            }
        }
    }
  end:
    printf("%d",m);
    return 0;
}