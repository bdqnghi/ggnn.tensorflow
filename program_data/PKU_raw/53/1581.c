void pd(int a[],int k)
{
int i,j;
for(i=0;i<k;i++)
for(j=i+1;j<k;j++)
if(a[i]==a[j]) a[j]=0;
for(i=1;i<k;i++)
if(a[i]) printf(",%d",a[i]);
}
int main()
{
int a[300],k,n;
scanf("%d",&k);
for(n=0;n<k;n++)
{scanf("%d",&a[n]);}
printf("%d",a[0]);

pd(a,k);
return 0;
}
