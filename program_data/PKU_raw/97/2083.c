int main()
{
int n,a,b,c,d,e;
scanf("%d",&n);
a=b=c=d=e=0;
while(n>=100)
{
n-=100;
a++;
}
while(n>=50)
{
n-=50;
b++;
}
while(n>=20)
{
n-=20;
c++;
}
while(n>=10)
{
n-=10;
d++;
}
while(n>=5)
{
n-=5;
e++;
}
printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,n);
return 0;
}