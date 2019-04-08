int main()
{
int n,i,l,k,j;
l=0;
scanf("%d\n",&n);
long int a[100001];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&k);//?????????
for(i=0;i<n;i++)
{
if(a[i]==k)
{for(j=i;j<n;j++)
a[j]=a[j+1];
l+=1;
i--;}
}
n-=l+1;
for(i=0;i<n;i++)
printf("%d ",a[i]);//????????????
                  printf("%d",a[n]);//????????
}