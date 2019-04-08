int main() {
int a,b,c,d,e,f;
int x,i,j;
scanf("%d",&x);
a=x/100;
i=x%100;
if (i>=50) {
   b=1;
   i=i-50;
} else {
  b=0;
}
j=i/10;
if (j==0) {
   c=0;
   d=0;
}
if (j==1) {
   c=0;
   d=1;
} 
if (j==2) {
   c=1;
   d=0;
}
if (j==3) {
   c=1;
   d=1;
}
if (j==4) {
   c=2;
   d=0;
}
j=i%10;
if (j>=5) {
   e=1;
   f=j-5;
} else {
  e=0;
  f=j;
}
printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
return 0;
}
