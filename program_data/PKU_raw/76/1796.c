int main(){
int n,a[50000],b[50000],i,k,c,d,isTrue=1;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d",&a[i],&b[i]);
}
for(k=1;k<=n;k++){
for(i=0;i<n-k;i++){
if(a[i]>a[i+1]){
c=a[i];
d=b[i];
a[i]=a[i+1];
b[i]=b[i+1];
a[i+1]=c;
b[i+1]=d;
}
}
}
for(i=0;i<n-1;i++){
if(b[i]<a[i+1]){
isTrue=0;
break;
}else{
if(b[i+1]<b[i]){
b[i+1]=b[i];
isTrue++;
}
}
}
if(isTrue==0){
printf("no");
}else{
printf("%d %d",a[0],b[n-1]);
}
return 0;
}

