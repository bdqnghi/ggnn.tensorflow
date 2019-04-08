int main(){
    int n,a[M],b[M],i,j,e,t,p,s;
    s=0;
    double m;
    scanf("%d",&n);
    scanf("\n");
    for(i=0;i<n;i++){
        scanf("%d %d",&(a[i]),&(b[i]));
        scanf("\n");
    }
    for(j=1;j<=n;j++){
        for(i=0;i<n-j;i++){
            if(a[i]>a[i+1]){
                e=a[i+1];
                a[i+1]=a[i];
                a[i]=e;
            }
            if(b[i]>b[i+1]){
                t=b[i+1];
                b[i+1]=b[i];
                b[i]=t;
            }
        }
    }
    m=a[0]+0.5;
    for(;m<b[n-1];m++){
        p=0;
        for(i=0;i<n;i++){
            if(m>a[i]&&m<b[i]){
                p=p+1;
            }
        }
        if(p>0){
            s=s+1;
        }
    }
    if(s==b[n-1]-a[0]){
        printf("%d %d",a[0],b[n-1]); 
    }else{
        printf("no");
    }
       return 0;
}


