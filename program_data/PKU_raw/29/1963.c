int main(){
    int n,i,j,k,l,a[1000];
    double b[1000],c[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    b[0]=1;b[1]=2;
    for(k=1;k<999;k++){
        b[k+1]=b[k]+b[k-1];
    }
    for(i=0;i<n;i++){
        c[i]=0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<a[i];j++){
            c[i]+=b[j+1]/b[j];
        }
    }
    for(i=0;i<n;i++){
        printf("%.3lf\n",c[i]);
    }
    return 0;
}