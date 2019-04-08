int main(){
    int N;
    int sz[500];
    scanf("%d\n",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&(sz[i]));
    }
    int odd[500],a=0;
    for(int x=0;x<N;x++){
        if(sz[x]%2==1){
            odd[a]=sz[x];
            a++;
        }
    }
    int num=0,e;
    for(int k=1;k<=a;k++){
        num=0;
        for(int y=0;y<=a-k;y++){
            if(odd[y]>=odd[num]){
                num=y;
            }
        }
        if(num!=a-k){
             e=odd[num];
             odd[num]=odd[a-k];
             odd[a-k]=e;
        }
    }
    for(int z=0;z<a-1;z++){
        printf("%d,",odd[z]);
    }
    printf("%d",odd[a-1]);
    return 0;
} 

