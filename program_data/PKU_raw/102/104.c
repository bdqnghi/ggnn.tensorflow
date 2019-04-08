
int main()
{
	double m[41],f[41],tmp;
	int n,nm,nf,i,j;
	char sex[10];
	scanf("%d",&n);
	nm=nf=0;
	for(i=0;i<n;i++)
	{
		scanf("%s",sex);
		if(strcmp(sex,"male")==0)
		{
			scanf("%lf",&m[nm++]);
		}
		else
		{
			scanf("%lf",&f[nf++]);
		}
	}

	for(i=0;i<nm;i++)
		for(j=i+1;j<nm;j++)
		{
			if(m[i]>m[j])
			{
				tmp=m[i];
				m[i]=m[j];
				m[j]=tmp;
			}
		}
	for(i=0;i<nf;i++)
		for(j=i+1;j<nf;j++)
			if(f[i]<f[j])
			{
				tmp=f[i];
				f[i]=f[j];
				f[j]=tmp;
			}
	for(i=0;i<nm;i++)
		printf("%.2f ",m[i]);
	for(i=0;i<nf-1;i++)
		printf("%.2f ",f[i]);
	printf("%.2f\n",f[nf-1]);
	return 0;
}