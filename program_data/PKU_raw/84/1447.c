int main()
{
int x,y,i,a,b,n,o;
scanf("%d\n%d\n%d\n",&n,&x,&y);
if(y>x)
{
a=x;
x=y;
y=a;
}
i=1;
while(i<=n-2)
{
scanf("%d\n",&b);
if(b>x)
{
o=x;
x=b;
y=o;
}
if(b<x&&b>y)
{
y=b;
}
i=i+1;
}
printf("%d\n%d\n",x,y);
return 0;
}