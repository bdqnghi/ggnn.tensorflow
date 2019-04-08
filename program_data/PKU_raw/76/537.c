int main(){
    int n,k,e,i,c=0;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d",&(a[i]));
        scanf("%d",&(b[i]));
    }
    for(k=0;k<=n;k++){
        for(i=0;i<n-k;i++){
            if(a[i]>a[i+1]){
                e=a[i];
                a[i]=a[i+1];
                a[i+1]=e;
                e=b[i];
                b[i]=b[i+1];
                b[i+1]=e;
            }else if(a[i]==a[i+1]){
                if(b[i]>b[i+1]){
                    e=b[i];
                    b[i]=b[i+1];
                    b[i+1]=e;
                }
            }
        }
    }
    for(i=0;i<n;i++){
        if(a[i+1]<=b[i]){
            a[i+1]=a[i];
            if(b[i+1]<=b[i]){
                b[i+1]=b[i];
            }
            c=c+1;
        }else{
            if(c>0){
                printf("%d %d",a[i],b[i]);
            }else if(c==0){
                printf("no");
            }
            break;
        }
    }
    return 0;
}
