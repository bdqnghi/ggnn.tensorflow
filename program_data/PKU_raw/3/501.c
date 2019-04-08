void main()
{
 int n,k,m;
 int a[1000];
 int i,j,flag=0;
 scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
{
	m=a[i]+a[j];
 if(m==k)
 flag=1;
 else
	 continue;
 break;
}
if(flag==0)
printf("no");
else if(flag==1)
printf("yes");
}