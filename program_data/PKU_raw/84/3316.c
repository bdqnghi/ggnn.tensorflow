int main()
{
 int   n,i=0,b,max1=0,max2=0;
scanf("%d",&n);
while(i<=n)
{
scanf("%d",&b);
if(b>max1)
{
 max2=max1;
 max1=b;
 }
else if(max1>b&&b>max2)
{
max1;
max2=b;
}
else if(max2>b)
{
max1;
max2;
}
i++;
}
printf("%d\n%d\n",max1,max2);
return 0;
}
