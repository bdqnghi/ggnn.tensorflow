int main()
{
int n,i,j,flag;
flag=0;
int a[10000];
int b[10000]={0};
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]%2==1)
b[a[i]]=1;
}
for(i=1;i<10000;i++)
{
if(b[i])
{
 if(flag)
{
printf(",%d",i);
}
else
{
printf("%d",i);
flag=1;
}
}
}
}
