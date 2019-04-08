int main(){
int n,a[50000],b[50000];
int i,x,y,j;
int m,p;
double e,f;
m=100;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d",&a[i],&b[i]);
}
x=a[0],y=b[0];
for(i=0;i<n;i++){
if(a[i]>x){
x=a[i];
}
if(b[i]>x){
x=b[i];
}
if(a[i]<y){
y=a[i];
}
if(b[i]<y){
y=b[i];
}
}

for(i=y;i<=x;i++){
e=i+0.1;
f=i-0.1;
for(j=0;j<n;j++){
p=1;
if(i==y){
if(e<=b[j]&&e>=a[j]){
p=0;
break;
}
}
if(i==x){
if(f<=b[j]&&f>=a[j]){
p=0;
break;
}
}
if(i<x&&i>y){
if(e<=b[j]&&e>=a[j]){
p=0;
break;
}
}

}
if((j=n-1)&&p==1){
m=0;
printf("no");
break;
}
}
if(m!=0){
printf("%d %d",y,x);
}
return 0;
} 