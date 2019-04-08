int main()
{
int n,k,a[N],b[N],i,j,flag=0;
scanf("%d %d",&n,&k);
printf(" ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
b[i]=a[i];
}
for(i=0;i<n-1;i++)
for(j=i;j<n;j++)
if(a[i]+b[j]==k)
{
flag=1;
break;
}
printf("\n");
if(flag==1)
printf("yes");
else printf("no");
return 0;
}

