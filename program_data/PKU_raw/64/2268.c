int main(){
    int n;
    int N=1000;
    scanf("%d",&n);
    int a[n];int b[n];int c[n];int d[n];int e[n];int f[n];int h[N];int q[N];int j[N];int v[N];int l[N];int o[N];
    double g[N];
    
    for(int i=1;i<=n;i++){
        scanf("%d %d %d",&a[i-1],&b[i-1],&c[i-1]);
        d[i-1]=a[i-1];e[i-1]=b[i-1];f[i-1]=c[i-1];
    }
    int x=0;
    for(int i=1;i<n;i++){
        double p;
        int s;
        for(int t=i+1;t<=n;t++){
        s=((a[i-1]-d[t-1])*(a[i-1]-d[t-1]))*1.0+((b[i-1]-e[t-1])*(b[i-1]-e[t-1]))*1.0+((c[i-1]-f[t-1])*(c[i-1]-f[t-1]))*1.0;
        p=sqrt(s)*1.0;
        g[x]=p;h[x]=a[i-1];q[x]=b[i-1];j[x]=c[i-1];v[x]=d[t-1];l[x]=e[t-1];o[x]=f[t-1];
        x++;
        }
    }
    
    for(int k=1;k<=x;k++){
        for(int m=1;m<=(x-k);m++){
            if(g[m-1]<g[m]){double y;y=g[m-1];g[m-1]=g[m];g[m]=y;
                            int s;s=h[m-1];h[m-1]=h[m];h[m]=s;
                            s=q[m-1];q[m-1]=q[m];q[m]=s;
                            s=j[m-1];j[m-1]=j[m];j[m]=s;
                            s=v[m-1];v[m-1]=v[m];v[m]=s;
                            s=l[m-1];l[m-1]=l[m];l[m]=s;
                            s=o[m-1];o[m-1]=o[m];o[m]=s;
                            
                            
            }
        }
    }
    
    for(int z=1;z<=x;z++){
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",h[z-1],q[z-1],j[z-1],v[z-1],l[z-1],o[z-1],g[z-1]);
    }
    return 0;
}


