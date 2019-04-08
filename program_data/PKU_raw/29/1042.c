int main()
{
	int m;
	int n[999];
	float f[999],k[999];
	scanf("%d",&m);
	int i=0,x=1;
	for(i=0;i<m;i++)
	{
		scanf("%d",&n[i]);
		if(n[i]>x)
			x=n[i];
	}



	int j=3;
	f[1]=1,f[2]=2,k[1]=2;
	x=x+2;
	for(j=3;j<=x;j++)
	{
		f[j]=f[j-1]+f[j-2];
		k[j-1]=k[j-2]+f[j]/f[j-1];
	}




	for(i=0;i<m;i++)
	{
		printf("%.3f\n",k[n[i]]);
	}
	return 0;
}
