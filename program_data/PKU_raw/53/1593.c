int main()
{
int n,x=0;
scanf("%d",&n);
int a[n];
scanf("%d",&a[0]);
printf("%d",a[0]);
for (int i=1;i<n;i++)
{
scanf("%d",&a[i]);
for (int j=0;j<i;j++)
{x=0;
if (a[j]==a[i]) {x=1;break;}
}
if (x==0) printf(",%d",a[i]);
}
}