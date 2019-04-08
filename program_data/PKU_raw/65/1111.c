int main (){
    int n,i,a,b,aa=0,bb=0,pp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        if(a==b-1||a==b+2){
            aa=aa+1;
        }else{
            if(a==b){
                pp=pp+1;
            }else{
                bb=bb+1;
            }
        }
    }
    if(aa>bb){
        printf("A");
    }else{
        if(aa==bb){
            printf("Tie");
        }else{
            printf("B");
        }
    }
    return 0;
}
