int main(){
int n,a[50000],b[50000],i,j,p,t,s;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&(a[i]),&(b[i]));
}
for(i=0;i<n;i++){
for(j=n-1;j>i;j--){
if(a[j]<a[j-1]){
t=a[j];
a[j]=a[j-1];
a[j-1]=t;
p=b[j];
b[j]=b[j-1];
b[j-1]=p;
}
}
}
s=0;
for(i=1;i<n;i++){
for(j=0;j<i;j++){
if(a[i]<b[j]+1){
s=s+1;
break;
}
}
}
if(s==n-1){
for(i=0;i<n;i++){
for(j=n-1;j>i;j--){
if(b[j]<b[j-1]){
t=b[j];
b[j]=b[j-1];
b[j-1]=t;
}
}
}
printf("%d %d",a[0],b[n-1]);
}
else printf("no");
return 0;
}
