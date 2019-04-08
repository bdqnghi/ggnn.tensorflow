void main()
{
int n,k,m,i,a,j,p;
scanf("%d %d",&n,&k);
m=0;
shuo: m=m+1;
i=m;
for(j=1;j<n;j++)
{
p=n*i+k;
a=p%(n-1);
if(a!=0)
goto shuo;
else
i=p/(n-1);
}
printf("%d",i*n+k);
}