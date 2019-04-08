int main(){
    int n,a,l=0,c,d;
    scanf("%d",&n);
    a=n*(n-1)/2;
    int x[n],y[n],z[n],q[a],p[a];
    double s[a],b;
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&x[i],&y[i],&z[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int k=i+1;k<n;k++){
                s[l]=sqrt((x[i]-x[k])*(x[i]-x[k])+(y[i]-y[k])*(y[i]-y[k])+(z[i]-z[k])*(z[i]-z[k]));
                p[l]=i;
                q[l]=k;
                l++;
            }
        }
    for(int i=1;i<=a;i++){
        for(int k=0;k<a-i;k++){
            if(s[k]<s[k+1]){
                b=s[k];
                s[k]=s[k+1];
                s[k+1]=b;
                c=p[k];
                p[k]=p[k+1];
                p[k+1]=c;
                d=q[k];
                q[k]=q[k+1];
                q[k+1]=d;
            }
        }
    }
    for(int i=0;i<a;i++){
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[p[i]],y[p[i]],z[p[i]],x[q[i]],y[q[i]],z[q[i]],s[i]);
    }
    return 0;
}


