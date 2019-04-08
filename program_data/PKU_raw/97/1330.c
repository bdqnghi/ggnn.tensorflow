int main(){
int n;
scanf("%d",&n);
int a=0,s=0,d=0,f=0,g=0,h=0;
a=n/100;
s=n%100/50;
d=n%50/20;
f=(n%100-s*50-d*20)/10;
g=n%10/5;
h=n%5;
printf("%d\n%d\n%d\n%d\n%d\n%d",a,s,d,f,g,h);
return 0;}