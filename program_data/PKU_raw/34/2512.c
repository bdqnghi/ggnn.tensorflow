main()
{
int n;
scanf("%d",&n);
while (n!=1)
{
if (n%2==1)
printf("%d*3+1=%d\n",(n-1)/3,n=n*3+1);
else 
printf("%d/2=%d\n",n*2,n=n/2);
}
printf("End");
}
