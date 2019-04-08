int main(){
int n,k,x,a,b,c,d;
k=1;
scanf("%d",&n);
double A,B,C,D;
a=0;b=0,c=0;d=0;
while(k<=n){
scanf("%d",&x);
if(x<=18){
a=a+1;
}else if(x<=35){
b=b+1;
}else if(x<=60){
c=c+1;
}else{
d=d+1;
}
k++;
}
A=100.0*a/n;
B=100.0*b/n;
C=100.0*c/n;
D=100.0*d/n;
printf("1-18: %.2lf%%\n",A);
printf("19-35: %.2lf%%\n",B);
printf("36-60: %.2lf%%\n",C);
printf("60??: %.2lf%%\n",D);
return 0;
}