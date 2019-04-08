int main()
{
	int n;
	scanf("%d",&n);
	int xuefen[10];
	int sum1=0;
	float defen[10];
	float jidian[10];
	float xueji[10];
	float gpa;
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&xuefen[i]);
		sum1+=xuefen[i];
	}
	for(j=0;j<n;j++)
	{
		scanf("%f",&defen[j]);
		if(defen[j]>=90)
			jidian[j]=4.0;
		else if(defen[j]>=85&&defen[j]<=89)
			jidian[j]=3.7;
        else if(defen[j]>=82&&defen[j]<=84)
			jidian[j]=3.3;
        else if(defen[j]>=78&&defen[j]<=81)
			jidian[j]=3.0;
        else if(defen[j]>=75&&defen[j]<=77)
			jidian[j]=2.7;
        else if(defen[j]>=72&&defen[j]<=74)
			jidian[j]=2.3;
        else if(defen[j]>=68&&defen[j]<=71)
			jidian[j]=2.0;
        else if(defen[j]>=64&&defen[j]<=67)
			jidian[j]=1.5;
        else if(defen[j]>=60&&defen[j]<=63)
			jidian[j]=1.0;
        else
			jidian[j]=0;
	}
	int k;
	float sum2;
	for(k=0;k<n;k++)
	{
		xueji[k]=jidian[k]*xuefen[k];
		sum2+=xueji[k];
	}
	gpa=sum2/(float)sum1;
	printf("%.2f",gpa);
	return 0;
}
