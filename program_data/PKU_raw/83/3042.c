//#include<iostream>
//using namespace std;

int main()
{
	int n,i;
	int xuefen[15],chengji[15];
	int sum;
	float jidian[15];
	float sum2;
	float tmp;
	scanf("%d",&n);
	getchar();
	sum=0;
	sum2=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&xuefen[i]);
		sum = sum + xuefen[i];
	}
	getchar();
	for(i=1;i<=n;i++)
	{
		scanf("%d",&chengji[i]);
		if(chengji[i]>=90 && chengji[i]<=100)
			jidian[i]=4.0;
		else if(chengji[i]>=85 && chengji[i]<=89)
			jidian[i]=3.7;
		else if(chengji[i]>=82 && chengji[i]<=84)
			jidian[i]=3.3;
		else if(chengji[i]>=78 && chengji[i]<=81)
			jidian[i]=3.0;
		else if(chengji[i]>=75 && chengji[i]<=77)
			jidian[i]=2.7;
		else if(chengji[i]>=72 && chengji[i]<=74)
			jidian[i]=2.3;
		else if(chengji[i]>=68 && chengji[i]<=71)
			jidian[i]=2.0;
		else if(chengji[i]>=64 && chengji[i]<=67)
			jidian[i]=1.5;
		else if(chengji[i]>=60 && chengji[i]<=63)
			jidian[i]=1.0;
		else
			jidian[i]=0;
	}
	sum2;
	for(i=1;i<=n;i++)
	{
		sum2=sum2+jidian[i]*xuefen[i];
	}
	tmp=sum2/sum;
	printf("%.2f",tmp);
	return 0;
}