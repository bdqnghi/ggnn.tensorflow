int f(int a);
int main()
{
int n,a,i;
scanf("%d",&n);
for(i=1;i<=n;i++){
scanf("%d",&a);
printf("%d\n",(f(a)));
}
return 0;
}
int f(int a){
int i;
int d=1;
int e=1;
int g=2;
if(a==1||a==2){
return 1;
}else if(a==3){
return 2;
}else {
for(i=4;i<=a;i++){
d=e;
e=g;
g=d+e;
}
return g;
}
}