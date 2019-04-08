int main() {
double n,c;
int i,j=0,m,s,t;
char a[501],b[501];
scanf("%lf\n",&n);
scanf("%s",a);
scanf("\n");
scanf("%s",b);
m=strlen(a);s=strlen(b);if(m<=s){t=m;}else{t=s;}
for(i=0;i<t;i++){
if(a[i]!='A'&&a[i]!='C'&&a[i]!='T'&&a[i]!='G'||m!=s){
printf("error");j=-1;break;}
if(a[i]==b[i]){
j++;}
}
c=1.0*j/m;
if(c>n){printf("yes");}
else if(c<=n&&c>=0){printf("no");}
return 0;
}




