int main()
{
int a,n;
scanf("%d",&n);
if(n<10)
printf("%d",n);
else if(n==10)
printf("1");
else
{do
{a=n%10;
printf("%d",a);
n=(n-a)/10;
}
while(n>=10);
a=n;
printf("%d",a);
}
return 0;
}