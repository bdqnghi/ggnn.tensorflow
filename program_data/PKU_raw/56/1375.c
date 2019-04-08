int main()
{
int n,i,a;
scanf("%d",&n);
while(n>0)
{
a=n%10;
n=n/10;
i++;
printf("%d",a);
}
return 0;
}