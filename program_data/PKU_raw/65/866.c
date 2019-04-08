int main(){
    int n,i,e=0;
    int a[201],b[201];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&(a[i]));
        scanf("%d",&(b[i]));
        if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
            e++;
        }else if((b[i]==0&&a[i]==1)||(b[i]==1&&a[i]==2)||(b[i]==2&&a[i]==0)){
            e--;
        }
    }
    if(e>0){
        printf("A");
    }
    if(e<0){
        printf("B");
    }
    if(e==0){
        printf("Tie");
    }
    return 0;
}
