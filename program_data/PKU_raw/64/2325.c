int main(){
    int n,i,j,m,k=0,x[10],y[10],z[10],a[50],b[50];
    double d[50],e;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d%d",&x[i],&y[i],&z[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            a[k]=i;
            b[k]=j;
            d[k]=sqrt(1.0*(x[i]-x[j])*(x[i]-x[j])+1.0*(y[i]-y[j])*(y[i]-y[j])+1.0*(z[i]-z[j])*(z[i]-z[j]));
            k++;
        }
    }
    for(i=k;i>0;i--){
          for(j=k-1;j>0;j--){
            if(d[j]>d[j-1]){
                e=d[j];
                d[j]=d[j-1];
                d[j-1]=e;
                m=a[j];
                a[j]=a[j-1];
                a[j-1]=m;
                m=b[j];
                b[j]=b[j-1];
                b[j-1]=m;
            }
        }
    }
    for(i=0;i<k;i++){
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[a[i]],y[a[i]],z[a[i]],x[b[i]],y[b[i]],z[b[i]],d[i]);
    }
    return 0;
}