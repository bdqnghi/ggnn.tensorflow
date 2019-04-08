
void work(int m);
int main(){
    int n;
    scanf("%d",&n);
    work(n);
    return 0;
}
void work(int m){
    int a[m],b[m];
    int i,j,k,man,hear,l;
    l=0;
    for(i=0;i<=m-1;i++){//chushihua
        a[i]=1;
        b[i]=0;
    }
    for(j=1;j<=m*m;j++){
        scanf("%d %d",&man,&hear);
        if(man==hear)break;
        a[man]=0;
        b[hear]=b[hear]+1;
    }
    for(k=0;k<=m-1;k++){
        if(a[k]==1){
            if(b[k]==m-1){
                printf("%d",k);
                l=1;
                break;
            }
            
        }
    }
    if(l==0)printf("NOT FOUND");
    
}