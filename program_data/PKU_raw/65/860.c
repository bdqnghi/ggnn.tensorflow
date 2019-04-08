int main(){
    int n,a=0,b=0,x,y;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d\n",&x,&y);
        if(x-y==1||(x==0&&y==2)){
            b++;
        }
         if(y-x==1||(y==0&&x==2)){
            a++;
        }
    }
    if(a>b){
        printf("A");
    }
    else if(a<b){
        printf("B");
    }
    else{
        printf("Tie");
    }
    return 0;
}
