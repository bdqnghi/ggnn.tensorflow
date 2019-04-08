int main()
{
int m,n,k,i=1,j=0,x;
scanf("%d%d",&n,&k);
for(i=1;j<n-1;i++)
{x=i;j=0;
while((n*x+k)%(n-1)==0)
{x=(n*x+k)/(n-1);j++;
if(j==n-1)break;}
}
printf("%d",n*x+k);
return 0;
}