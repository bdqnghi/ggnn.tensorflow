int main(){
    int n,i,a,b,A,B;
    A=0;
    B=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
            A++;
        }else if((a==1&&b==0)||(a==2&&b==1)||(a==0&&b==2)){
            B++;
        }
    }
    if(A==B){
        printf("Tie");
    }else if(A>B){
        printf("A");
    }else if(A<B){
        printf("B");
    }
    return 0;
}