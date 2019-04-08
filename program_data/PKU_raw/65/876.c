int main(){
    int n;
    scanf("%d",&n);
    int A[n], B[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&A[i], &B[i]);
    }
    int x=0, y=0;
    for(int i=0;i<n;i++){
        if((A[i]==0&&B[i]==1)||(A[i]==1&&B[i]==2)||(A[i]==2&&B[i]==0)){
            x=x+1;
        }
        if((B[i]==0&&A[i]==1)||(B[i]==1&&A[i]==2)||(B[i]==2&&A[i]==0)){
            y=y+1;
        }
    }
    if(x>y){
        printf("A");
    }
    if(x<y){
        printf("B");
    }
    if(x==y){
        printf("Tie");
    }
    return 0;
}
