int main()
{
int n,i,j,f,a,m;

scanf("%d",&n);
for(i=5;i>=1;i--)
{
f=pow(10,i);
a=n/f;
if(a!=0) break;
}
for(j=1;j<=i+1;j++)
{
m=n%10;



printf("%d",m);
n=(n-m)/10;

}
return 0;

}