void main()
{
	int n,i;
	int a[2][10],c=0;
	double b[10];
	double m=0;
	scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[0][i]);
}
for(i=0;i<n;i++)
{
c=c+a[0][i];
}
for(i=0;i<n;i++)
{
	scanf("%d",&a[1][i]);
    if(a[1][i]>=90&&a[1][i]<=100)
        b[i]=4.0;
	if(a[1][i]>=85&&a[1][i]<=89)
		b[i]=3.7;
	if(a[1][i]>=82&&a[1][i]<=84)
		b[i]=3.3;
	if(a[1][i]>=78&&a[1][i]<=81)
		b[i]=3.0;
	if(a[1][i]>=75&&a[1][i]<=77)
		b[i]=2.7;
	if(a[1][i]>=72&&a[1][i]<=74)
		b[i]=2.3;
	if(a[1][i]>=68&&a[1][i]<=71)
		b[i]=2.0;
	if(a[1][i]>=64&&a[1][i]<=67)
		b[i]=1.5;
    if(a[1][i]>=60&&a[1][i]<=63)
		b[i]=1.0;
	if(a[1][i]<60)
		b[i]=0;
}
for(i=0;i<n;i++)
{
m=m+a[0][i]*b[i]/c;
}
printf("%.2f",m);
}