int main(){
int i,m,n,p=0,c=0,d=0;
double k,t;
char a[501],b[501];
scanf("%lf",&k);
scanf("%s",a);
scanf("%s",b);
m=strlen(a);
n=strlen(b);
if(m==n){
for(i=0;i<n;i++){
if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G') {
c++;}
if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){
d++;
}
if(a[i]==b[i])
p++;
}
t=1.0*p/n;
if(c==0&&d==0){
if(t>k) printf("yes");
else printf("no");
}else{
printf("error");
}
}else{
printf("error");
}
return 0;
}




