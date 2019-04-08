int main(){
int a,b,c,d,e,f,h,m,s,t;
for(;a!=0;){
scanf("%d%d%d%d%d%d\n",&a,&b,&c,&d,&e,&f);
d+=12;
h=d-a;
m=e-b;
s=f-c;
t=3600*h+60*m+s;
if(a!=0){
	printf("%d\n",t);}
}
return 0;
}
