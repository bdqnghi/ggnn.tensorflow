int main(){
    int n;
    scanf("%d",&n);
    int a,b,c,m,j=0,k=0;
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        c=a-b;
        if(c==-1||c==2){
            j++;
        }
        else if(c==1||c==-2){
            k++;
        }
    }
    m=j-k;
    if(m==0){
        printf("Tie");
    }
    else if(m<0){
        printf("B");
    }
    else if(m>0){
        printf("A");
    }
    return 0;
}
