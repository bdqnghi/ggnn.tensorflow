
int main(void)
{
int arr[100], n;
int i;
scanf("%d",&n);
for(i=0;i<n;++i)
scanf("%d",&arr[i]);
for(i=0;i<n/2;++i)
{
arr[i]^=arr[n-i-1];
arr[n-i-1]^=arr[i];
arr[i]^=arr[n-i-1];
}
for(i=0;i<n;++i)
{
printf("%d",arr[i]);
if(i!=n-1)
printf(" ");
}
return 0;
}
