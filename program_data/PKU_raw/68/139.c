int isprime(int a)
{
int i;
for(i=3;i<=(int)sqrt(a);i+=2)
 if(a%i==0)
return 0;
return (a==2)||(a%2!=0);
}
int main()
{
int n,i,j;
scanf("%d",&n);
for(i=6;i<=n;i+=2)
{
for(j=2;j<=i/2;j++)
if(isprime(j)&&isprime(i-j))
{
printf("%d=%d+%d\n",i,j,i-j);
break;
}
}
return 0;
}