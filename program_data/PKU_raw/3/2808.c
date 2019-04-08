int main(){
    int a[MAX];
    int n,k,i,j,s;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    s=a[1]+a[2];
    for(i=0;i<n;i++){
        if(s==k){
            break;
        }
        else{
        for(j=0;j<n;j++){
           s=a[i]+a[j];
           if(s==k)
           break;
           else
           s=s;
        }}
    }
    if(s==k){
        printf("yes");
    }
    else
    printf("no");
    return 0;
}
