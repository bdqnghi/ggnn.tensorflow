int main()
{
int a,b;
scanf("%d",&a);
int n,i;
if(a>=10000)n=5;
else if(a>=1000)n=4;
else if(a>=100)n=3;
else if(a>=10)n=2;
else n=1;
int c[5];
b=a;
for(i=1;i<=n;i++)
{c[i]=b%10;b=(b-c[i])/10;}
b=0;
for(i=1;i<=n;i++)
{b=b*10+c[i];}
printf("%d",b);
}