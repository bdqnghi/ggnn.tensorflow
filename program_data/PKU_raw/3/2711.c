int main()
{
int n,k,i,j,sum,flag;
int a[1000];
scanf("%d %d\n",&n,&k);
scanf("%d",&a[0]);
flag=0;
for(i=1;i<=n-1;i++)
{
scanf(" %d",&a[i]);
for(j=0;j<i;j++)
{
sum=a[i]+a[j];
if(sum==k)
{
printf("yes");
flag=1;
break;
}
if(flag==1)
break;
}
if(flag==1)
break;
}
if(flag==0)
printf("no");
}