int main(){
int x,y,z,r,s,t,a,m,n,p,q;
scanf("%d",&a);
if(a>0&&a<1000){
x=a/100;
m=a%100;
y=m/50;
n=m%50;
z=n/20;
p=n%20;
r=p/10;
q=p%10;
s=q/5;
t=q%5;
printf("%d\n",x);
printf("%d\n",y);
printf("%d\n",z);
printf("%d\n",r);
printf("%d\n",s);
printf("%d",t);
}
return 0;
}
