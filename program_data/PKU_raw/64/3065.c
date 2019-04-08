int main(){
int n,m,j,e,x[101],y[101],z[101],a[20000],b[20000];
int s[10000];
int t=0;
double c[10000];
scanf("%d\n",&n);

for(int i=0;i<n;i++){
scanf("%d%d%d",&x[i],&y[i],&z[i]);}
for(int i=0;i<n;i++){
for(j=i+1;j<n;j++){
s[t]=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]);
a[t]=i;b[t]=j;t++;
          }}


for(int i=0;i<t-1;i++){
for(j=0;j<t-i-1;j++){
if(s[j]<s[j+1]){
                  e=s[j+1];  
s[j+1]=s[j]; 
                 s[j]=e;
e=a[j+1];a[j+1]=a[j];a[j]=e;e=b[j+1];b[j+1]=b[j];b[j]=e;
                }
            }}
for(m=0;m<t;m++){
c[m]=1.0*sqrt(s[m]);}
for(m=0;m<t;m++){
       printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[a[m]],y[a[m]],z[a[m]],x[b[m]],y[b[m]],z[b[m]],c[m]);}

return 0;
}
