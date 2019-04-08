
void fy(int n,int k)
{
int j,l,m;
for(j=1;l!=n;j++)
{
m=j;
for(l=0;l<n;l++)
{
if(m%(n-1)==0)
{m=m*n/(n-1)+k;
continue;
}
break;
}
}
printf("%d",m);
}
void main()
{
int n,k;
scanf("%d %d",&n,&k);
fy(n,k);
}