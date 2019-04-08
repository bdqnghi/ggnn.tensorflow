int main(){
    int min, max, n, i, j, x=0;
    int a[10000], b[10000], c[10000]={0};
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d%d", &a[i], &b[i]);
    }
    for(i=0;i<n;i++){
        for(j=a[i];j<b[i];j++){
        c[j]=1;}
    }
    min=a[0];max=b[0];
    for(i=1;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
        if(max<b[i]){
            max=b[i];
        }
    }
    for(i=min;i<max;i++){
        if(c[i]==0){
            x=1;
        }
    }
    if(x==1){printf("no");}else{
    printf("%d %d", min, max);}
    return 0;
}
