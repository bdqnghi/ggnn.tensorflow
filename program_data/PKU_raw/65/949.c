int main(){
    int a,b,i,n,p=0,q=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        scanf("%d",&b);
        if((a-b==1)||(b-a==2)){
            q++;
        }else if((b-a==1)||(a-b==2)){
            p++;
        }else if(a==b){
            p=p;
            q=q;
        }
    }
    if(p>q){
        printf("A");
    }else if(p<q){
        printf("B");
    }else if(p==q){
        printf("Tie");
    }
    return 0;
}
