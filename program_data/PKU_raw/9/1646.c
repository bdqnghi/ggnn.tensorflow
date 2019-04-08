int main()
{
	int i,j,n,k,l,z;
	int a[100],b[100],f[100];
	char d[30],c[100][30],e[100][30];
	scanf("%d",&n);
	for(i=0,z=0;i<n;i++)
	{
		scanf("%s",c[i]);
		scanf("%d",&a[i]);
		if(a[i]>=60)
		{b[z]=a[i];f[z]=z;strcpy(e[z],c[i]);a[i]=0;z++;}
	}
	for(i=0;i<z;i++)
	{
		for(j=i+1;j<z;j++)
		{
			if(b[j]>b[i])
			{
				strcpy(d,e[i]);strcpy(e[i],e[j]);strcpy(e[j],d);
				k=b[i];b[i]=b[j];b[j]=k;
				l=f[i];f[i]=f[j];f[j]=l;
			}
			if(b[i]==b[j])
			{
				if(f[i]>f[j])
				{
				strcpy(d,e[i]);strcpy(e[i],e[j]);strcpy(e[j],d);
				k=b[i];b[i]=b[j];b[j]=k;
				l=f[i];f[i]=f[j];f[j]=l;
				}
			}
		}
	}
	for(i=0;i<z;i++)
		printf("%s\n",e[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
			printf("%s\n",c[i]);
	}
	return 0;
}