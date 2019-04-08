int main()
{
int m;
for (scanf("%d",&m);m--;)
{
int n;
scanf("%d",&n);
double tot=0;
double a,b;
a=1;b=2;
while (n--)
{
tot+=b/a;
int c=a+b;a=b;b=c;
}
printf("%.3f\n",tot);
}
return 0;
}