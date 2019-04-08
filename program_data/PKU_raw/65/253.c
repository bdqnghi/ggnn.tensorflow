int main(){
    int i,j,n,a,b;
    int A=0;
    int B=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);        
        if(a==b){
            A=A;
            B=B;
        }else if(a==1&&b==0){
            B++;
        }else if(a==2&&b==0){
            A++;
        }else if(a==1&&b==2){
            A++;
        }else if(a==2&&b==1){
            B++;
        }else if(a==0&&b==1){
            A++;
        }else if(a==0&&b==2){
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
