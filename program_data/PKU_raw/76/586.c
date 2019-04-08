int main(){
int n,i,m,e,f,g;
double p;
scanf("%d\n",&n);
int a[n],b[n];
for(i=0;i<n;i++){
scanf("%d",&a[i]);
scanf("%d\n",&b[i]);
}
e=b[0];
for(i=1;i<n;i++){
if(b[i]>e){
e=b[i];
}
}
f=a[0];
for(i=1;i<n;i++){
if(a[i]<f){
f=a[i];
}
}
int sz[e-f+1],tz[e-f+1];
for(i=0;i<=e-f;i++){
sz[i]=0;
tz[i]=0;
}
for(i=f;i<=e;i=i+1){
for(m=0;m<n;m++){
if(i>b[m]||i<a[m]){
sz[i-f]=sz[i-f]+1;
}
}
}
for(i=f;i<e;i++){
p=i+0.5;
for(m=0;m<n;m++){
if(p>b[m]||p<a[m]){
tz[i-f]=tz[i-f]+1;
}
}
}
for(i=0;i<=e-f;i++){
if(sz[i]==n||tz[i]==n){
printf("no");
return 0;
}
}
printf("%d ",f);
printf("%d",e);
return 0;
}