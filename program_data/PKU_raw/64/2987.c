

int main(){
    int n=0,x[11],y[11],z[11],a[51][3];
    double d[50];
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++)
            scanf("%d %d %d ",&x[i],&y[i],&z[i]);
    int cnt=0;
    for(int i=1;i<=n;i++)
            for(int j=i+1;j<=n;j++){
                    int c=++cnt;
                    d[c]=sqrt(sqr(x[i]-x[j])+sqr(y[i]-y[j])+sqr(z[i]-z[j]));
                    a[c][1]=i;
                    a[c][2]=j;
            }
    for(int i=1;i<=cnt;i++)
            for(int j=cnt;j>i;j--)
                    if(d[j-1]<d[j]){
                                    double t1;
                                    int t2,t3;
                                    t1=d[j-1];
                                    d[j-1]=d[j];
                                    d[j]=t1;
                                    t2=a[j-1][1];
                                    t3=a[j-1][2];
                                    a[j-1][1]=a[j][1];
                                    a[j-1][2]=a[j][2];
                                    a[j][1]=t2;
                                    a[j][2]=t3;
                    }
    for(int i=1;i<=cnt;i++)
            printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",
            x[a[i][1]],y[a[i][1]],z[a[i][1]],x[a[i][2]],y[a[i][2]],z[a[i][2]],d[i]);
    return 0;
}
            
            
                                               
    