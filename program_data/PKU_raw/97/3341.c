int main(){
int a,b,c,d,e,f,g;
scanf("%d",&a);
b=(a-a%100)/100;
a=a%100;
c=(a-a%50)/50;
a=a%50;
d=(a-a%20)/20;
a=a%20;
e=(a-a%10)/10;
a=a%10;
f=(a-a%5)/5;
a=a%5;
g=a;
printf("%d\n%d\n%d\n%d\n%d\n%d\n",b,c,d,e,f,g);
return 0;
}                                