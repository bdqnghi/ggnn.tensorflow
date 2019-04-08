int main()
{
int n,i,r,fm,sm;
int shu[100];
scanf("%d\n",&n);
for(i=0;i<n;i++)
scanf("%d\n",&shu[i]);
for(i=n-1;i>0;i--)
{
for(r=0;r<i;r++)
{
if(shu[r]>shu[r+1])
{
int tmp;
tmp=shu[r+1];
shu[r+1]=shu[r];
shu[r]=tmp;
}
}
}
fm=shu[n-1];
sm=shu[n-2];
printf("%d\n",fm);
printf("%d\n",sm);
return 0;
}

