int main()
{
int n,i,j,a[100],passer1,passer2;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
if(a[i+1]<a[i]){
passer1=a[i+1];
a[i+1]=a[i];
a[i]=passer1;}
for(j=0;j<n-2;j++)
if(a[j+1]<a[j]){
passer2=a[j+1];
a[j+1]=a[j];
a[j]=passer2;}
printf("%d\n%d\n",a[n-1],a[n-2]);
return 0;
}