int main(){
int a[50000],b[50000],n,i,t,y=0,j,k,x;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
}
for(i=0;i<n-1;i++){
for(j=n-1;j>i;j--){
if(a[j]<a[j-1]){
k=a[j],x=b[j];
a[j]=a[j-1],b[j]=b[j-1];
a[j-1]=k,b[j-1]=x;
}
}
}
for(i=0;i<n-1;i++){
if(b[i]<a[i+1]){
y++;
}
if(b[i]>=b[i+1]){
t=b[i];
b[i]=b[i+1];
b[i+1]=t;
}
}
if(y!=0){
printf("no");
}else{
printf("%d %d",a[0],b[n-1]);
}
return 0;
}

