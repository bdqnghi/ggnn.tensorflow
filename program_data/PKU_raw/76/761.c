int n,a[50000],b[50000],c[50000]={0};
int main(){
    int n,i,j,e,max,min,l,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
        for(j=a[i];j<b[i];j++){
            c[j]=1;
        }
    }
for(j=1;j<=n;j++){
    for(i=0;i<n-j;i++){
        if(a[i]>a[i+1]){
            e=a[i+1];
            a[i+1]=a[i];
            a[i]=e;
        }
    }
}
for(j=1;j<=n;j++){
    for(i=0;i<n-j;i++){
        if(b[i]>b[i+1]){
            e=b[i+1];
            b[i+1]=b[i];
            b[i]=e;
        }
    }
}
max=b[n-1];
min=a[0];
l=max-min;
for(i=min;i<=max;i++){
    m=m+c[i];
    
}
if(m==l){
    printf("%d %d",min,max);
    
}
else{
    printf("no");
}
return 0;
}
