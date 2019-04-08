int main()
{
int n,i,j,k,s,b=0,c1=0,c2=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
{scanf("%d",&k);
if(k==0)
{c2++;}
if(k==0&&b==0)
{c1++;}
else if(k==255&&b==0&&c1>0)
{b=1;}}}
s=(c1-2)*(c2-c1*2)/2;
printf("%d",s);
return 0;
}