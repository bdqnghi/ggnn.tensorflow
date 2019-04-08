
int main(){
int n;
int a,b,c,d,e,f;
int g,h,i,j,k;

scanf("%d",&n);
a=n/100;
g=n-a*100;
b=g/50;
h=n-100*a-50*b;
c=h/20;
i=n-100*a-50*b-c*20;
d=i/10;
j=n-100*a-50*b-c*20-d*10;
e=j/5;
k=n-100*a-50*b-c*20-d*10-e*5;
f=k;
printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);
 return 0;
}