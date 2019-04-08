int main(){
    int n,A=0,B=0,i;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
        if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
            A++;
        }else if(a[i]==b[i]){
            continue;
        }else{
            B++;
        }
    }
    if(A>B){
        printf("A");
    }else if(A<B){
        printf("B");
    }else{
        printf("Tie");
    }
    return 0;
}
