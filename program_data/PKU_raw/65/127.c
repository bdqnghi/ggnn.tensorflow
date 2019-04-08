int main(){
    int i,a=0,A,b=0,B,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&A,&B);
        if(A==B){
            continue;
        }
        if((A==0&&B==1)||(A==1&&B==2)||(A==2&&B==0)){
            a++;
        }
        if((B==0&&A==1)||(B==1&&A==2)||(B==2&&A==0)){
            b++;
        }
    }
    if(a==b){
        puts("Tie");
    }
    if(a>b){
        puts("A");
    }
    if(a<b){
        puts("B");
    }
    return 0;
}