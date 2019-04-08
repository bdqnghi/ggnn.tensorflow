int main()
{
	int n,i,j,a[100],b[100],c[100]={0},max=0,f=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d%d",&a[i],&b[i]);
}
for(i=0;i<n;i++)
{
		if(a[i]>=90&&a[i]<=140&&b[i]<=90&&b[i]>=60) 
		{
			c[i]=0;
			for(j=i;j<n;j++)
				if(a[j]>=90&&a[j]<=140&&b[j]<=90&&b[j]>=60) 
					c[i]++;
				else break;
		}
}
for(i=0;i<n;i++)
{
	if(c[i]>max)
	{
	int tmp;
	tmp=c[i];
	c[i]=max;
	max=tmp;
	}
}
printf("%d",max);
return 0;
}