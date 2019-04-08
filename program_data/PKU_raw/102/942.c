int main()
{
	char sex[45][9];
	double l[45],l1[45]={0},l2[45]={0},e;
	int n,i,j=0,k=0,s,sum1=0,sum2=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %lf",sex[i],&l[i]);
	for(i=0;i<n;i++)
	{
		if(sex[i][0]=='m')
		{
			l1[j++]=l[i];
			sum1++;

		}
		if(sex[i][0]=='f')
		{
			l2[k++]=l[i];
			sum2++;
		}
	}
	for(s=1;s<=sum1;s++)
	{
		for(j=0;j<sum1-s;j++)
		{
			if(l1[j]>l1[j+1])
			{
				e=l1[j];
				l1[j]=l1[j+1];
				l1[j+1]=e;
			}
		}
	}
	for(s=1;s<=sum2;s++)
	{
		for(k=0;k<sum2-s;k++)
		{
			if(l2[k]>l2[k+1])
			{
				e=l2[k];
				l2[k]=l2[k+1];
				l2[k+1]=e;
			}
		}
	}
	for(j=0;j<sum1;j++)
		printf("%.2lf ",l1[j]);
	for(k=sum2-1;k>0;k--)
		printf("%.2lf ",l2[k]);
	printf("%.2lf",l2[0]);
	return 0;
}
	