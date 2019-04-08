main()
{
int n,i,k,count=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(a[i]!=k)
{
count++;
if(count==1)
printf("%d",a[i]);
if(count>1)
printf(" %d",a[i]);
}
}
}
