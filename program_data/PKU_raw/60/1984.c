int main()
{
int su(int a);
int n,i,q=0;
scanf("%d",&n);
for(i=1;i<=n-2;i++)
if(su(i)==1&&su(i+2)==1)
{
printf("%d %d\n",i,i+2);
q=1;
}
if(q==0)
printf("empty");
}
int su(int a)
{
if(a==1)
return(0);
else if(a==2)
return(1);
else
{
int j,p=0;
for(j=2;j<a;j++)
{
if(a%j==0)
p=1;
}
if(p==0)
return(1);
else
return(0);
}
}
