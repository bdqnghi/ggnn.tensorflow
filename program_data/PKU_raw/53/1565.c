int main()
{
int a[300],i,j=0,k,l,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d ",&a[i]);}
printf("%d",a[0]);
for(i=1;i<n;i++)
{while(a[i]!=a[j]) j++;if(j==i){printf(",%d",a[i]);}
j=0;}
}
