int main()
{
	int n,i,j;
	double t;
	struct
	{
	double x;
	double y;
	double z;
	}a[100];
	double b[100];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%lf%lf",&a[i].x,&a[i].y);
for(i=n-1;i>=0;i--)
{
	for(j=0;j<i;j++)
{
a[j].z=sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y));
}
for(j=1;j<n;j++)
{
if(a[j-1].z>a[j].z)
{
	t=a[j-1].z;
	a[j-1].z=a[j].z;
	a[j].z=t;
}
}
b[i]=a[n-1].z;
}
for(j=1;j<n;j++)
{
if(b[j-1]>b[j])
{
	t=b[j-1];
	b[j-1]=b[j];
	b[j]=t;
}
}
printf("%.4lf\n",b[n-1]);
return 0;
}