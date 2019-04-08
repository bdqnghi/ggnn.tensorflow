

int main(int argc, char* argv[])
{
	int n,i,j,z=0,p[100],b[100],l[100],sum[100];
	char g[100],x[100];
	char m[100][20];
	scanf("%d\n",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",m[i]);
		scanf("%d%d",&p[i],&b[i]);
		scanf(" %c %c ",&g[i],&x[i]);
		scanf("%d",&l[i]);
	}
	for (i=0;i<n;i++)
	{
		sum[i]=0;
		if (p[i]>90) sum[i]=sum[i]+2000;
		if (p[i]>85)
		{
			if (b[i]>80) sum[i]=sum[i]+4000;
			if (x[i]=='Y') sum[i]=sum[i]+1000;
		}
	    if ((p[i]>80)&&(l[i]>0)) sum[i]=sum[i]+8000;
		if ((b[i]>80)&&(g[i]=='Y')) sum[i]=sum[i]+850;
	}
	for (i=0;i<n;i++) z=sum[i]+z;
	int max=sum[0];
	j=0;
	for (i=0;i<n;i++)
	{
		if (sum[i]>max)
		{
			max=sum[i];
			j=i;
		}
	}
	printf("%s\n%d\n%d\n",m[j],max,z);
	return 0;
}
