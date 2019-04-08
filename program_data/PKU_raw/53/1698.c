int main()
{
int n,s=0,a[300]={0},k=0,i,j,b[300]={-10000};
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d ",&a[i]);
for(j=0;j<n;j++)
{{for(i=0;i<n;i++)
if(a[j]!=b[i]) k++;}
if(k==n) {b[s]=a[j];s++;k=0;}else {k=0;}}
printf("%d",b[0]);
for(j=1;j<s;j++)
printf(",%d",b[j]);
}