int main()
{
int m1,m2,n;
char c;
m1=m2=0;
do
{
scanf("%d%c",&n,&c);
if (n>m1)
{
m2=m1;
m1=n;
}
else if((n>m2)&&(n!=m1))
m2=n;
}
while(c==',');
if((m2!=m1)&&(m2!=0))
printf("%d",m2);
else
printf("No");

return 0;
}
