void main()
{
	int n,i,j;
	double a[100],b[100],c[100],max[100],len;
	scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%lf %lf",&a[i],&b[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
c[j]=sqrt((a[j]-a[i])*(a[j]-a[i])+(b[j]-b[i])*(b[j]-b[i]));
max[i]=c[i+1];
for(j=i+1;j<n;j++)
{
	if(c[j]>max[i])
		max[i]=c[j];
}
}
len=max[0];
for(i=0;i<n;i++)
{
	if(max[i]>len)
		len=max[i];
}
printf("%g",len);
}
