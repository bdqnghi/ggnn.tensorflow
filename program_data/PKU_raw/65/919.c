int main(){
    int n,a,b,i,c,d,e;
    scanf("%d",&n);
    d=0;
    e=0;
    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        c=a-b;
        if(c==-1||c==2){
            d++;
        }else{if(c!=0){
            e++;}
        }
    }if(d>e){
        printf("A");
    }else{
        if(d<e){
            printf("B");
        }else{
            printf("Tie");
        }
    }
    return 0;
}
