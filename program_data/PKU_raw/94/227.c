int main(){
int k,n,i,m,x,y,z,c;
scanf("%d",&n);
int a[n];
int b[n];
x=0;
y=0;
for(i=0;i<n;i++){
scanf("%d",&(a[i]));
}
for(i=0;i<n;i++){
for(m=0;m<n;m++){
if(a[m]<a[i]){
x=x+1;
}
if(a[m]==a[i]){
y=y+1;
}
}
for(z=x;z<=x+y-1;z++){
b[z]=a[i];
}
x=0;
y=0;
}
for(i=0;i<n;i++){
if(b[i]%2!=0){
printf("%d",b[i]);
c=i;
break;
}
}
for(i=c+1;i<n;i++){
if(b[i]%2!=0){
printf(",%d",b[i]);
}
}
return 0;
}
