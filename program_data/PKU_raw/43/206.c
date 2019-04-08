int isprime(int n)
{
 int i;
for(i=2;i<n;i++)
if(n%i==0)
return 0;
return 1;
}

int main(void)
{
int m;
int i;
scanf("%d",&m);

for(i=3;i<=m/2;i+=2)
{
if(isprime(i)&&isprime(m-i))
{
printf("%d %d\n",i,m-i);
continue;
}
}
return 0;
}