int main(){
int n,i,a[1000],b[1000],c=0,d=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d",&a[i],&b[i]);
if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
c+=1;
}
else{
if(c>d){
d=c;
c=0;
}else{
c=0;
}
}
}
if(d>c){
printf("%d",d);
}else{
printf("%d",c);
}



return 0;
}
