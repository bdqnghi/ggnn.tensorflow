int main()
{
	char a[700];
	double m[700],f[700],t;
	int n,i,j=0,k=0,ml=0,fl=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a);
		if(a[0]=='m')
		{
			scanf("%lf",&m[j++]),ml++;
		}
		else scanf("%lf",&f[k++]),fl++;
	}
	for(k=ml-1;k>0;k--)
	{
		for(j=0;j<k;j++)
		{
			if(m[j]>m[j+1])
			{
				t=m[j];
				m[j]=m[j+1];
				m[j+1]=t;
			}
		}
	}
	for(k=fl-1;k>0;k--)
	{
		for(j=0;j<k;j++)
		{
			if(f[j]<f[j+1])
			{
				t=f[j];
				f[j]=f[j+1];
				f[j+1]=t;
			}
		}
	}
	for(i=0;i<ml;i++)
	{
		printf("%.2lf ",m[i]);
	}
	for(i=0;i<fl-1;i++)
	{
		printf("%.2lf ",f[i]);
	}
	printf("%.2lf",f[fl-1]);
}