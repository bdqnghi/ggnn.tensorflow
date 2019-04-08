int main(){
int y=0,x=0,n,i,a[100],b[100];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d",&a[i],&b[i]);
if(i!=n-1&&a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
x++;
}
else if(i!=n-1&&x>y){
y=x;
x=0;
}
else if(i!=n-1&&y>=x){
x=0;
}
else if(i==n-1&&a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90&&y<x+1){
x++;
y=x;
}
else if(i==n-1&&x>y){
y=x;
}
}
printf("%d",y);
return 0;
}