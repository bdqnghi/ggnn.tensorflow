int main(){
int n,m,i,j,r;
int a[10],b[10],c[10],f[100],g[100],h[100],x[100],y[100],z[100];
double d[100];
scanf("%d",&n);
m=0;
for(i=0;i<n;i++){
scanf("%d%d%d",&a[i],&b[i],&c[i]);}
for(i=n-2;i>=0;i--){
for(j=n-1;j>i;j--){
d[m]=(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])+(c[i]-c[j])*(c[i]-c[j]);
d[m]=sqrt(d[m]);
f[m]=a[i];
g[m]=b[i];
h[m]=c[i];
x[m]=a[j];
y[m]=b[j];
z[m]=c[j];
m=m+1;}}
for(j=m-1;j>0;j--){
    for(r=0;r<j;r++){
        if(d[r]>d[r+1]){
            double tmp;
            int t1,t2,t3,t4,t5,t6;
            tmp=d[r+1];
            t1=f[r+1];
            t2=g[r+1];
            t3=h[r+1];
            t4=x[r+1];
            t5=y[r+1];
            t6=z[r+1];
            d[r+1]=d[r];
            f[r+1]=f[r]; 
            g[r+1]=g[r];
            h[r+1]=h[r];
            x[r+1]=x[r];
            y[r+1]=y[r];
            z[r+1]=z[r];
            d[r]=tmp;
            f[r]=t1;
            g[r]=t2;
            h[r]=t3;
            x[r]=t4;
            y[r]=t5;
            z[r]=t6;
        }
    }
}
for(i=m-1;i>=0;i--){
 printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",f[i],g[i],h[i],x[i],y[i],z[i],d[i]);
 }
return 0;
}
