int bi(char a[],char b[])
{
	int i,m=0,z=0;
	char c[6]={0};
	while(a[z+strlen(b)-1]!=0)
	{
	for(i=0;i<strlen(b);i++) c[i]=a[z+i];
	if(strcmp(b,c)==0) m++;
	z++;
	for(i=0;i<6;i++) c[i]=0;
	}
	return m;
}
int main()
{
	char a[600]={0},b[6]={0},c[500][6]={0};
	int i,j,z=0,k,m,n,d[500]={0},max=0;
	scanf("%d",&n);
	scanf("%s",a);
	while(a[z+n-1]!=0)
	{
	for(i=0;i<n;i++) b[i]=a[i+z];
	d[z]=bi(a,b);
	z++;
	for(i=0;i<6;i++) b[i]=0;
	}
	for(i=0;d[i]!=0;i++) if(max<d[i]) max=d[i];
	if(max==1) printf("NO");
	else
	{
	printf("%d\n",max);
	z=0;
	for(i=0;d[i]!=0;i++)
	{
		if(d[i]==max)
		{
			for(j=i;j<i+n;j++) c[z][j-i]=a[j];
			m=0;
			for(k=0;k<z;k++) if(strcmp(c[z],c[k])==0) m++;
			if(m==0) printf("%s\n",c[z]);
			z++;
		}
	}
	}
}