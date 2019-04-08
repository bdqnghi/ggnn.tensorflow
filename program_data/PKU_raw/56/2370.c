void main()
{
int n,t,i,z=1,a[5],m=0;
scanf("%d",&n);
t=n;
while(t/10!=0)
{z++;t=t/10;
}
for(i=0;i<z;i++)
{
a[i]=n%10;
m=m*10+a[i];
n=n/10;
}
printf("%d",m);
}