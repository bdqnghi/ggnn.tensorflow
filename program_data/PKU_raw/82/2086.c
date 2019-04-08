int main(){
    int a[100],b[100],c[100]={0},d[100]={0};
    int i,n,k,result=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++){
        if(90<=a[i]&&a[i]<=140&&60<=b[i]&&b[i]<=90){
            c[i]=1;
        }
    }
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            if(c[i]==1){
                d[k]+=1;
                c[i]=0;
                if(c[i+1]==0){
                    break;
                }
            }
        }
    }
    for(i=0;i<k;i++){
        if(d[i]>=max)
        max=d[i];
    }
    printf("%d",max);
    return 0;
}
