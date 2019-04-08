int main()
{
int m,a,b,i;
scanf("%d",&m);
if((m%2)==0)
{
for(a=3;a<=m/2;a+=2)
{
for(i=2;i<a;i++)
{
if(a%i==0)break;}
if(i<a)
continue;
else
{
b=m-a;
for(i=2;i<b;i++)
{
if(b%i==0)break;}
if(i<b)
continue;
else
printf("%d %d\n",a,b);
}
}
}
return 0;
}
