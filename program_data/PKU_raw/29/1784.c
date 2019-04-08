int main()
{
	int n;
	float ai=1,aj,am=0;
	float bi=2,bj,bm=5;
	int a[1000];
	int i,j,m;
	float s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(j=1;j<=n;j++)
	{
		for(m=1;m<=a[j];m++)
		{
			if(m==1) aj=2;else aj=am;
			if(m==1) bj=3;else bj=bm;
			s=s+bi/ai;
			am=ai+aj;
			bm=bi+bj;
			ai=aj;
			bi=bj;
		}
		printf("%.3f\n",s);
		s=0;
		ai=1;
		bi=2;
	}
	
	return 0;
}