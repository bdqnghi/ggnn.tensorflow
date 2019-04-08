int main()
{
int n,a[10],b[10],i;
float GPA,c[10],g[10],sum1=0;
float sum2=0;
scanf("%d",&n);
for(i=0;i<n;i++)
	scanf("%d ",&a[i]);
for(i=0;i<n;i++)
{
	scanf("%d ",&b[i]);
	if(b[i]>=90&&b[i]<=100)
		c[i]=4.0;
	else if(b[i]>=85&&b[i]<=89)
		c[i]=3.7;
	else if(b[i]>=82&&b[i]<=84)
		c[i]=3.3;
	else if(b[i]>=78&&b[i]<=81)
		c[i]=3.0;
	else if(b[i]>=75&&b[i]<=81)
		c[i]=2.7;
	else if(b[i]>=72&&b[i]<=74)
		c[i]=2.3;
	else if(b[i]>=68&&b[i]<=71)
		c[i]=2.0;
	else if(b[i]>=64&&b[i]<=71)
		c[i]=1.5;
	else if(b[i]>=60&&b[i]<=63)
		c[i]=1.0;
	else c[i]=0;
}
for(i=0;i<n;i++)
{
	sum1=sum1+a[i];
	g[i]=a[i]*c[i];
	sum2=sum2+g[i];
}
GPA=sum2/sum1;
printf("%.2f",GPA);
return 0;
}