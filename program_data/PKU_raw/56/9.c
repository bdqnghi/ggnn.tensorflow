
int main()
{
int n,m,i=5;
scanf("%d",&n);
if (!n) 
{
printf("%d",n);
return 0;
}
while (n)
{
printf("%d",n%10);
n=n/10;
}
return 0;
}
