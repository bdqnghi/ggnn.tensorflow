int main()
{
int a,b,c,d,e,n;
scanf("%d\n%d\n%d\n",&n,&a,&b);
if(a<b) {
c=a;
a=b;
b=c;

}
n=n-2;
for(e=1;e<=n;e++)
{
scanf("%d",&d);
if(a<d) {
	b=a;
  a=d;

}
else if(b<d) b=d;

}
printf("%d\n%d",a,b);


}