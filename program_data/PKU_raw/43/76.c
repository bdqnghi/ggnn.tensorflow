int main()
{
int n,p,i,j,a;
scanf("%d",&n);
for(j=3;j<=n/2;j+=2)
{
a=0;
for(i=3;i<=(int)sqrt(j);i+=2)
if(j%i==0)
{a=1;break;}
for(i=3;i<=(int)sqrt(n-j);i+=2)
if((n-j)%i==0)
{a=1;break;}
if(a==0)
printf("%d %d\n",j,n-j);
}
}