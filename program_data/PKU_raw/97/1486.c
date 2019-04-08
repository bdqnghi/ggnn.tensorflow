int main ()
{
int n,yb,ws,es,sy,wy,yy,z,x,w,y;
scanf("%d",&n);
yb=n/100;
z=n-yb*100;
ws=z/50;
y=n-yb*100-ws*50;
es=y/20;
x=n-yb*100-ws*50-es*20;
sy=x/10;
w=n-yb*100-ws*50-es*20-sy*10;
wy=w/5;
yy=w-wy*5;
printf("%d\n%d\n%d\n%d\n%d\n%d",yb,ws,es,sy,wy,yy);
return 0;
}