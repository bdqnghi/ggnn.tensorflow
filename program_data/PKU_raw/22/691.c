int main()
{
	int a,b,c;
char d;
	scanf("%d",&a);
b=0;
c=0;
for( ; ; )
{
d=getchar();
if(d!=',')
break;
scanf("%d",&b);
if(b>a)
{c=a;
a=b;}
if(b<a&&b>c)
c=b;
}
if(c==0)
printf("No");
else
printf("%d",c);
	return 0;
}
