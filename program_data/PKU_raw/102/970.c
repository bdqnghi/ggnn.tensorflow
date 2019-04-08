int main(){
char s[7];
int i,n,j;
scanf("%d",&n);
double a[n],b[n],m,t;
for(i=0;i<n;i++){
a[i]=0;
b[i]=0;
scanf("%s%lf",s,&m);
if(s[0]=='m'){
a[i]=m;
}
else b[i]=m;
}
for(i=0;i<n-1;i++){
for(j=0;j<n-1;j++){
if(a[j]>a[j+1]){
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
if(b[j]<b[j+1]){
t=b[j];
b[j]=b[j+1];
b[j+1]=t;
}
}
}
for(i=0;i<n;i++){
if(a[i]!=0){
printf("%.2lf",a[i]);
t=a[i];
break;
}
}
for(i=0;i<n;i++){
if(a[i]>t){
printf(" %.2lf",a[i]);
}
}
for(i=0;i<n;i++){
if(b[i]>0){
printf(" %.2lf",b[i]);
}
}
return 0;
}
