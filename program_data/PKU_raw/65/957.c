int main(){
    int i,n,A[210],B[210],a=0,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&A[i],&B[i]);
        if((A[i]==0&&B[i]==1)||(A[i]==1&&B[i]==2)||(A[i]==2&&B[i]==0)){
            a=a+1;}
        if((B[i]==0&&A[i]==1)||(B[i]==1&&A[i]==2)||(B[i]==2&&A[i]==0)){
            b=b+1;}
    }
    if(a>b){printf("A");}
    if(a<b){printf("B");}
    if(a==b){printf("Tie");}
    return 0;
}
