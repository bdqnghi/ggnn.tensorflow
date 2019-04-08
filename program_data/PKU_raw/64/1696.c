int main(){
    int x[10],y[10],z[10];
    double l[10][10];
    double d[100];
    double m;
    int i,j,k,n;
	int s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&x[i],&y[i],&z[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            l[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
            d[s]=l[i][j];
            s+=1;
        }
    }
    for(i=0;i<n*n;i++){
        for(j=0;j<n*(n-1)/2-1;j++){
            if(d[j]<d[j+1]){
                m=d[j];
                d[j]=d[j+1];
                d[j+1]=m;
            }
        }
    }
    for(k=0;k<n*(n-1)/2;k++){
        while(d[k]==d[k-1]){
            k+=1;
        }
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(l[i][j]==d[k]){
                    printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[i],y[i],z[i],x[j],y[j],z[j],d[k]);
                }
            }
        }
    }
    return 0;
}