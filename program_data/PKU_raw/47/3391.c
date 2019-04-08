int main(void)
{
int i,n;
scanf("%d\n",&n);
int num[n];
for(i=0;i<n;i++)
scanf("%d",&num[i]);
for(i=1;i<n;i++)
printf("%d ",num[n-i]);
printf("%d",num[0]);
return 0;
}
