int feibo[200]={0};
float fen[100]={0};
int feii(int n)
{
	if(feibo[n])	return feibo[n];
	if(n==1)	return feibo[n]=1;
	if(n==2)	return feibo[n]=2;
	return feibo[n]=feii(n-1)+feii(n-2);
}
int main()
{
	int n,m;
	scanf("%d",&m);
	while(m--)
	{
		int i,j;
		float sum=0;
		scanf("%d",&n);
		for(i=1;i<=n+1;i++)
			feii(i);
		for(i=1;i<=n;i++)
		{
			if(fen[i]==0)
				fen[i]=(float)feibo[i+1]/(float)feibo[i];
			sum+=fen[i];
		}
		printf("%.3f\n",sum);
	}
} 