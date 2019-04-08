int main(){
    int n,i,e,k=0,x=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&(a[i]));
    }
    for(int k=1;k<=n;k++){
        for(i=0;i<n-k;i++){
            if(a[i]>a[i+1]){
                e=a[i+1];
                a[i+1]=a[i];
                a[i]=e;
            }
        }
    }
    for(i=0;i<n;i++){
        if((a[i])%2==1){
            k++;
        }
    }
    int b[k];
    for(i=0;i<n;i++){
        if((a[i]%2)==1){
            b[x]=a[i];
            x++;
        }
    }
    for(i=0;i<k-1;i++){
        printf("%d,",b[i]);
    }
    printf("%d",b[k-1]);
    return 0;
}
