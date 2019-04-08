int n,sum=0,a[100],b[100];
double ave,max=0;
void bubble(int *a,int n)
{
	int i,j,m;
	for (i=1;i<n;i++)
		for (j=0;j<n-i;j++)
			if(a[j]>a[j+1])
			{
				m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}


}
void fuc()
{
	int i,j=0;
	ave=(double)sum/n;
	for (i=0;i<n;i++)
	{
		max=(fabs(ave-a[i])>max) ? 	fabs(ave-a[i]) : max;	
	}
	for (i=0;i<n;i++)
	{
		if (fabs(fabs(ave-a[i])-max)<1e-6) b[j++]=a[i];
	}
	bubble(b,j);
	for (i=0;i<j;i++)
	{
		printf("%d%c",b[i],(i==j-1)?'\n':',');
	}
}
void main()
{
	int i;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",a+i);
		sum+=a[i];
	}
	fuc();
}