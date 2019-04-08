int main(){
    int a,b,n,i;
    scanf("%d",&n);
    int z[n],x[n];
    for(i=0;i<n;i++){
        scanf("%d%d",&z[i],&x[i]);
    }
    a=0;
    b=0;
    for(i=0;i<n;i++){
        if(z[i]==0&&x[i]==2){
            b++;
        }
        else if(z[i]==2&&x[i]==0){
            a++;
        }
        else if(z[i]<x[i]){
            a++;
        }
        else if(z[i]>x[i]){
            b++;
        }
    }
    if(a>b){
        printf("A");
    }
    else if(a<b){
        printf("B");
    }
    else if(a==b){
        printf("Tie");
    }
    return 0;
}
