int main(){
    int n,x,y,s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if((x==0&&y==1)|(x==1&&y==2)|(x==2&&y==0)){
            s++;
        }else if(x==y){
        }else{
            s--;
        }
    }
    if(s==0){
        printf("Tie");
    }
    if(s>0){
        printf("A");
    }
    if(s<0){
        printf("B");
    }
    return 0;
}