
int main()
{
int a,b,n,x,sum=0;
scanf("%d",&n);
for (a=0;a<=9;a++)
{
if (a==7) continue;
for (b=0;b<=9;b++)
{
if (b==7) continue;
x=a*10+b;
if (x%7==0) continue;
if (x>n) break;
sum+=x*x;
}
}
printf("%d\n",sum);
return 0;
}