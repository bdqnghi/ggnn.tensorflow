main()
{
	void sx(float p[],int n);
	void jx(float p[],int n);
	float f[45],m[45],w[45];
	char a[45][10];
	int n,i,j=0,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%s%f",a[i],&w[i]);
	for(i=0;i<n;i++)
	{
		if(a[i][0]=='m')
		{
			m[j]=w[i];
			j++;
		}
		if(a[i][0]=='f')
		{
			f[k]=w[i];
			k++;
		}
	}
	sx(m,j);
	jx(f,k);
	for(i=0;i<j;i++)
	printf("%.2f ",m[i]);
	for(i=0;i<k-1;i++)
	printf("%.2f ",f[i]);
	printf("%.2f",f[k-1]);

}
void sx(float p[],int n)
{
	int i,j;
	float t;
	for(i=0;i<n;i++)
	for(j=0;j<i;j++)
	if(p[i]<p[j])
	{
		t=p[i];
		p[i]=p[j];
		p[j]=t;
	}	
}
void jx(float p[],int n)
{
	int i,j;
	float t;
	for(i=0;i<n;i++)
	for(j=0;j<i;j++)
	if(p[i]>p[j])
	{
		t=p[i];
		p[i]=p[j];
		p[j]=t;
	}	
}