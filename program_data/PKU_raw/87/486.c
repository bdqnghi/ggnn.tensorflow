int main() {
int a,b,c,d,e,f,x,y,z,sum;
while(1){
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(a<1) break;
x=3600*(12-a+d);
y=60*e+f;
z=60*b+c;
sum=x+y-z;
printf("%d\n",sum);}
return 0;
}
