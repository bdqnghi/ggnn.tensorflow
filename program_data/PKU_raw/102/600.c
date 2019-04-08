int main(){
int n,i,k,f,j;
double e;
k=0;
f=0;
double z;
double a[40];
double b[40];
char c[10];
for(i=0;i<40;i++){
a[i]=0;
b[i]=0;
}
scanf("%d",&n); 
for(i=0;i<n;i++){
scanf("%s%lf",c,&z);
if(c[0]=='m'){
a[k]=z;
k=k+1;
}
else{
b[f]=z;
f=f+1;
}
}
for(n=k-1;n>=1;n--){
for(i=0;i<n;i++){
if(a[i]>a[i+1]){
e=a[i];
a[i]=a[i+1];
a[i+1]=e;
}
}
}
for(n=f-1;n>=1;n--){
for(i=0;i<n;i++){
if(b[i]<b[i+1]){
e=b[i];
b[i]=b[i+1];
b[i+1]=e;
}
}
}
printf("%.2lf",a[0]);
if(k>1){
for(i=1;i<=k-1;i++){
printf(" %.2lf",a[i]);
}
}
for(i=0;i<=f-1;i++){
printf(" %.2lf",b[i]);
}
return 0;
}

