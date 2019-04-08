void main()
{
int n;
scanf("%d",&n);
int a,b,c,d;
a=0;
b=0;
c=0;
d=0;
int e=0;
int f=0;

while(n>=100)
{
	n=n-100;
	a++;
}
while(n>=50)
{
	n=n-50;
	b++;
}
while(n>=20)
{
n=n-20;
c++;
}
while(n>=10)
{
	n=n-10;
	d++;
}
while(n>=5)
{
	n=n-5;
	e++;
}
while(n>=1)
{
	n=n-1;
	f++;
}
printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);
}





