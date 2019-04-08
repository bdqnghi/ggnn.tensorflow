int main(){
    int n,i,k,a,w,e;
    scanf("%d\n",&n);
    int x[n],y[n],z[n];
    for(i=0;i<n;i++){
        scanf("%d %d %d ",&x[i],&y[i],&z[i]);
    }    
    double r,s,m[n*(n-1)/2],j;
    int p[n*(n-1)/2],q[n*(n-1)/2];
    a=0;
    for(i=0;i<n;i++){
        for(k=i+1;k<n;k++){
        r=sqrt((x[i]-x[k])*(x[i]-x[k])+(y[i]-y[k])*(y[i]-y[k])+(z[i]-z[k])*(z[i]-z[k]));
        m[a]=r;
        p[a]=i;
        q[a]=k;
        a++;
        }
    }
    s=n*(n-1)/2;
    for(i=1;i<s;i++){
        for(a=0;a<s-i;a++){
            if(m[a]<m[a+1]){
                j=m[a];
                m[a]=m[a+1];
                m[a+1]=j;
                w=p[a];
                p[a]=p[a+1];
                p[a+1]=w;
                e=q[a];
                q[a]=q[a+1];
                q[a+1]=e;
            }
        }
    }
    for(a=0;a<s;a++){
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[p[a]],y[p[a]],z[p[a]],x[q[a]],y[q[a]],z[q[a]],m[a]);
    }
    return 0;
}





