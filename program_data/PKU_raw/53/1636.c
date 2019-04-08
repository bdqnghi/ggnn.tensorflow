int main()
{
int a[300],i,j,k,l,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
printf("%d",a[0]);
for(i=1;i<n;i++)
{j=0; while(a[i]!=a[j]) j++; if(j==i) {printf(",%d",a[i]);}}}