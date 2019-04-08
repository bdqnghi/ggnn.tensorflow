int main()
{
int a[50000],b[50000],n,i,s,v=0,z;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
}
for(z=0;z<n;z++){
    for(i=0;i<n-1;i++){
if(a[i]>a[i+1]){
 s=a[i];
a[i]=a[i+1];
a[i+1]=s;
s=b[i];
b[i]=b[i+1];
b[i+1]=s;
}
}
}
for(i=0;i<n-1;i++){
if(b[i+1]<b[i]){
    a[i+1]=a[i];
    b[i+1]=b[i];
}
}
for(i=0;i<n-1;i++){
    if(a[i+1]>b[i]){
        v+=1;
    }
}
if(v==0){
printf("%d %d",a[0],b[n-1]);
}
if(v>0){
printf("no");
}
return 0;
}
