int main(){
    int n,i,t,d,m,j,k;
    scanf("%d",&n);
    int a[n];
    t=0;
    for(i=0;i<n;i++){
        scanf("%d",&(a[i]));
        d=a[i]%2;
        if(d==1){
            t=t+1;
        }
    }
    int b[t];
    m=0;
    for(i=0;i<n;i++){
        d=a[i]%2;
        if(d==1){
          b[m]=a[i];
          m=m+1;
        }
    }
    for(m=0;m<t;m++){
        for(j=t-1;j>m;j--){
            if(b[j]<b[j-1]){
                k=b[j];
                b[j]=b[j-1];
                b[j-1]=k;
            }
        }
    }
    for(m=0;m<(t-1);m++){
        printf("%d,",b[m]);
    }
    printf("%d",b[t-1]);
    return 0;
}

