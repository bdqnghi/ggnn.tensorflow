int main(){
    int i,n;
    int a,b;
    int p=0;
    int q=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&a,&b);
        if(a==b){
            p+=0;
            q+=0;
        }else if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
            p+=1;
        }else if((a==1&&b==0)||(a==2&&b==1)||(a==0&&b==2)){
            q+=1;
        }
    }if(p>q){
        printf("A");
        
    }else if(q>p){
        printf("B");
    }else if(p==q){
        printf("Tie");
    }
    return 0;
    
}

