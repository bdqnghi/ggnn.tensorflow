void main()
{
int n,k,i,j,a,b,c,d,m;
scanf("%d %d",&n,&k);
b=1;c=1;
for(j=1;j<=n;j++)
{b=b*(n-1);
 c=c*n;}
for(i=n-1;;i++)
{a=i;
d=a+(n-1)*k;
if(d%b==0)break;}
m=d/b*c-k*(n-1);
printf("%d",m);

}
