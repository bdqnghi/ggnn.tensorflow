void main()
{int n,a[300],i,j,flag=1;
scanf("%d",&n);
for(i=1;i<n;i++)
scanf("%d ",&a[i]);
scanf("%d",&a[n]);
printf("%d",a[1]);
for(i=2;i<=n;i++)
{for(j=1;j<i;j++)
if(a[j]==a[i])flag=0;
if(flag==1)printf(",%d",a[i]);
flag=1;}
}