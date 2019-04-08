main()
{
int a,b;
scanf("%d",&a);
while (a!=1)
{
if(a%2==0)
{
b=a/2;
printf("%d/2=%d\n",a,b);
a=b;
}
else
{b=3*a+1;
printf("%d*3+1=%d\n",a,b);
a=b;
}
}
printf("End");
getchar();
getchar();
}