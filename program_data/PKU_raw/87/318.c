int main(){
int a,b,c,d,e,f,a1,a2,a3,a4,a5,a6,x=0;
while(1){
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
if(a==0) break;
if(f>=c) x=x+f-c;
else{
x=x+60+f-c;
e--;
}
if(e>=b) x=x+(e-b)*60;
else{
x=x+(60+e-b)*60;
d--;
}
x=x+(d-a+12)*3600;
printf("%d\n",x);
x=0;
}
return 0;
}
