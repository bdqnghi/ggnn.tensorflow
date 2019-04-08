int main(){
    int n;
    scanf("%d",&n);
    int x[100]={0};
    int y[100]={0};
    int z[100]={0};
    double d[4500]={0};
    int i,j,t,p=0;
    for(i=0;i<n;i++){
        scanf("%d%d%d",&x[i],&y[i],&z[i]);
    }
    int k=0;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            d[k]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
            k++;
        }
    }
    for(i=0;i<k-1;i++){
        for(j=i+1;j<k;j++){
            if(d[i]<d[j]){
                double tmp;
                tmp=d[i];
                d[i]=d[j];
                d[j]=tmp;
            }
        }
    }
    double a[4500]={0};
    for(i=0;d[i]!=0;i++){
        if(d[i]==d[i+1]){continue;}
        else if(d[i]!=d[i+1]){a[p]=d[i];p++;}
    }
    for(i=0;i<p;i++){
        if(a[i]==0){break;}
        for(j=0;j<n;j++){
            for(t=j+1;t<n;t++){
                if(sqrt((x[t]-x[j])*(x[t]-x[j])+(y[t]-y[j])*(y[t]-y[j])+(z[t]-z[j])*(z[t]-z[j]))==a[i]){
                    printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[j],y[j],z[j],x[t],y[t],z[t],a[i]);
                }
            }
        }
    }
    return 0;
}
