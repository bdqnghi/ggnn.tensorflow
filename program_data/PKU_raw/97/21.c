int main(){
int n;
scanf("%d",&n);
int q,w,e,r,t,y,u;
q=(int)n/100;
w=(int)(n%100)/50;
e=(int)(n%50)/20;
r=(int)(n-100*q-50*w-20*e)/10;
t=(int)(n%10)/5;
y=(int)n%5;
printf("%d\n%d\n%d\n%d\n%d\n%d",q,w,e,r,t,y);
return 0;
}