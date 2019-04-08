int main()
{
int n,i,j,k;
scanf("%d\n",&n);
int c[n];
scanf("%d",&c[1]);
printf("%d",c[1]);
for(i=2;i<=n;i++)
{
scanf("%d",&c[i]);
for(j=1;j<=i-1;j++)
{
if(c[j]==c[i]) break;
}
if(j==i) printf(" %d",c[i]);
}
return 0;
}