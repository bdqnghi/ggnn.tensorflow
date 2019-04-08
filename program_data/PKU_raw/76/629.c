int main(){
int n,i,k,e,w,j,min,max;
scanf("%d\n",&n);
int a[n],b[n];
for(i=0;i<n;i++){
if(i==n-1){
scanf("%d %d",&(a[i]),&(b[i]));
}
else{
scanf("%d %d\n",&(a[i]),&(b[i]));
}
}
for(k=1;k<n;k++){
for(i=0;i<n-k;i++){
if(a[i]>a[i+1]){
e=a[i];
a[i]=a[i+1];
a[i+1]=e;
w=b[i];
b[i]=b[i+1];
b[i+1]=w;
}
}
}
min=a[0];
max=b[0];
j=1;
for(i=1;i<n;i++){
    if(min<=a[i]){
    if(max<a[i]){
      j=0;
    }
    else{
    if(max<=b[i]){
    max=b[i];
    }
    }
    }
   if(min>a[i]){
   if(b[i]<min){
   j=0;
   }
   else{
   min=a[i];
   if(max<=b[i]){
   max=b[i];
}
}
}
}
if(j==0){
printf("no");
}
else{
printf("%d %d",min,max);
}
return 0;
}

