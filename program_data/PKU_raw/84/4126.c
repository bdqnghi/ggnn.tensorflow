void main()
{
int i,n,a[100],max=0,min=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
if (a[i]>max) {min=max;max=a[i];}
else if(a[i]>min) min=a[i];
printf("%d\n%d",max,min);
}