int main(){
double r,t;
int i,k,u,z;
z=0;
u=0;
char a[500];
char b[500];
scanf("%lf",&r);
scanf("%s",a);
scanf("%s",b);
for(i=0;a[i]!='\0';i++){
if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'){
printf("error");
z=1;
break;
}
if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'){
printf("error");
z=1;
break;
}
if(b[i]=='\0'){
printf("error");
z=1;
break;
}
}
if(b[i]!='\0'&&z==0){
printf("error");
}
else if(z==0){
for(k=0;k<i;k++){
if(a[k]==b[k]){
u=u+1;
}
}
t=1.0*u/i;
if(t>r){
printf("yes");
}
if(t<=r){
printf("no");
}
}
return 0;
}