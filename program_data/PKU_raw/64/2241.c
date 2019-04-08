int main(){
    int n,a,m,js=0,p=0,q,e;
    scanf("%d\n",&n);
    int x[n-1],y[n-1],z[n-1];
    double jg[100],o;
    for(int i=0;i<100;i++){
        jg[i]=-1;
    }
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&x[i],&y[i],&z[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int k=i+1;k<n;k++){
            a=10*i+k;
            jg[a]=sqrt((x[i]-x[k])*(x[i]-x[k])+(y[i]-y[k])*(y[i]-y[k])+(z[i]-z[k])*(z[i]-z[k]));
        }
    }
    o=0;
    m=n*(n-1)/2;
    for(int i=0;i<100;i++){
        if(js==m){
            break;
        }
        if(o<jg[i]){
            o=jg[i];
            p=i; 
        }
        if(i==99){
            q=p/10;
            n=p-q*10;
            printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[q],y[q],z[q],x[n],y[n],z[n],o);
            jg[p]=-1;
            i=-1;
            o=0;
            js++;
        }
    }
    return 0;
}







