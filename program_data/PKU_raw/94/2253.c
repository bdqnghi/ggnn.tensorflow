int main(){
    int n, i, j, b;
    int a[500];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[j]>a[j+1]){
                b=a[j];
                a[j]=a[j+1];
                a[j+1]=b;
            }
        } 
    }
    for(i=0;i<n-2;i++){
        if(a[i]%2!=0){
            printf("%d,", a[i]);
        }
    }
    if(a[n-2]%2!=0){
        printf("%d", a[n-2]);
    }else{printf("%d", a[n-1]);}
    return 0;
}
