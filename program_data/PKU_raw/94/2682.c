int main(){
    int i,k,e,n,m,a[MAX],b[MAX];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    m=0;
    for(i=0;i<n;i++){
        if((a[i])%2!=0){b[m]=a[i];m++;}
        else{b[m]=b[m];}
    }
    m=m-1;
    for(k=1;k<=m+1;k++){
    for(i=0;i<m+1-k;i++){
        if(b[i]>b[i+1]){
            e=b[i+1];
            b[i+1]=b[i];
            b[i]=e;
        }
    }
    }for(i=0;i<m;i=i+1){
    printf("%d,",b[i]);
}printf("%d",b[m]);
}

