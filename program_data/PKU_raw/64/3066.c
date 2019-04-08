int main(){
int n;
int x[1000],y[1000],z[1000],a[100],b[100] ;
double s[1000],c[1000];
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d%d%d",&x[i],&y[i],&z[i]);}
int t=0;
for(int i=0;i<n;i++){
for(int k=i+1;k<n;k++){
s[t]=(x[i]-x[k])*(x[i]-x[k])+(y[i]-y[k])*(y[i]-y[k])+(z[i]-z[k])*(z[i]-z[k]);
a[t]=i;
b[t]=k;
t++;}}
double e;
int r;
for(int i=0;i<t-1;i++){
for(int k=0;k<t-i-1;k++){
if(s[k]<s[k+1]){
                  e=s[k+1];  
s[k+1]=s[k]; 
                 s[k]=e;
r=a[k+1];a[k+1]=a[k];a[k]=r;r=b[k+1];b[k+1]=b[k];b[k]=r;
                }
            }}
for(int i=0;i<t;i++){
c[i]=1.0*sqrt(s[i]);}
for(int i=0;i<t;i++){
printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[a[i]],y[a[i]],z[a[i]],x[b[i]],y[b[i]],z[b[i]],c[i]);}
return 0;
}
