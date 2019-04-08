int main()
{
	float shuzu[NUM],shulie[NUM],qiuhe[NUM],s=0;
	shuzu[0]=1,shuzu[1]=2;
	for(int j=0;j<NUM-2;j++)
	{
		shuzu[j+2]=shuzu[j]+shuzu[j+1];
	}
	for(int i=0;i<NUM-2;i++)
	{
		shulie[i]=shuzu[i+1]/shuzu[i];
	}
	int m;
	scanf("%d",&m);
	for(int k=0;k<m;k++)
	{
		scanf("%f",&(qiuhe[k]));
		for(int l=0;l<qiuhe[k];l++)
		{
			s+=shulie[l];
		}
		printf("%.3f\n",s);
		s=0;
	}
	return 0;
}