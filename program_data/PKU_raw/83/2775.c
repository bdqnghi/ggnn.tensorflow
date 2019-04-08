
void main()
{
	int n,i;
	float GPA,sum1=0,sum2=0;
	int xuefen[100];
	float score[100];

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&xuefen[i]);
		
	}
	for(i=0;i<n;i++)
	{
		scanf("%f",&score[i]);
	}
	for(i=0;i<n;i++)
	{
		if((score[i]>=90)&&(score[i]<=100))
		{
			score[i]=4.0;
		}
		else if((score[i]>=85)&&(score[i]<=89))
		{
			score[i]=3.7;
		}
		else if((score[i]>=82)&&(score[i]<=84))
		{
			score[i]=3.3;
		}
		else if((score[i]>=78)&&(score[i]<=81))
		{
			score[i]=3.0;
		}
		else if((score[i]>=75)&&(score[i]<=77))
		{
			score[i]=2.7;
		}
		else if((score[i]>=72)&&(score[i]<=74))
		{
			score[i]=2.3;
		}
		else if((score[i]>=68)&&(score[i]<=71))
		{
			score[i]=2.0;
		}
		else if((score[i]>=64)&&(score[i]<=67))
		{
			score[i]=1.5;
		}
		else if((score[i]>=60)&&(score[i]<=63))
		{
			score[i]=1.0;
		}
		else if((score[i]>=0)&&(score[i]<60))
		{
			score[i]=0.0;
		}
	}

	for(i=0;i<n;i++)
	{
		sum1=sum1+(xuefen[i]*score[i]);
		sum2=sum2+xuefen[i];
	}
	GPA=sum1/sum2;

	printf("%.2f",GPA);
}


