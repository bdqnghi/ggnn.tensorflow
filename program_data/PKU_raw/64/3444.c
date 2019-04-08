int main(){
    int a1[100],a2[100],a3[100],n,z[100],i,j,k=0,a[100],b[100];
    double o,m,x[100],y[100];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d%d%d",&a1[i],&a2[i],&a3[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            x[k]=(a1[i]-a1[j])*(a1[i]-a1[j])+(a2[i]-a2[j])*(a2[i]-a2[j])+(a3[i]-a3[j])*(a3[i]-a3[j]);
            y[k]=sqrt(x[k]);
            a[k]=i;
            b[k]=j;
            k=k+1;
        }
    }
    for(i=1;i<=k;i++){
        for(j=0;j<k-i;j++){
            if(y[j]<y[j+1]){
                m=y[j];
                y[j]=y[j+1];
                y[j+1]=m;
                
                m=a[j];
                a[j]=a[j+1];
                a[j+1]=m;
                
                m=b[j];
                b[j]=b[j+1];
                b[j+1]=m;
            }
        }
    }
    for(i=0;i<k;i++){
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a1[a[i]],a2[a[i]],a3[a[i]],a1[b[i]],a2[b[i]],a3[b[i]],y[i]);
    }
}

