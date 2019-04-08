
int main()
{
	int n;
	int sum1=0;
	int i,j,k;
	scanf("%d",&n);
	int a['n'],score['n'];
	float b['n'],sum2=0,GPA;
	for(i=0;i<n;i++)
	{
		scanf("%d",&(a[i]));
		sum1=sum1+a[i];
	}
	for(j=0;j<n;j++)
	{
		scanf("%d",&(score[j]));
		if(((score[j])<=100)&&((score[j])>=90))
		{
			b[j]=4.0;
		}
		else if(((score[j])<=89)&&((score[j])>=85))
		{
			b[j]=3.7;
		}
		else if(((score[j])<=84)&&((score[j])>=82))
		{
			b[j]=3.3;
		}
		else if(((score[j])<=81)&&((score[j])>=78))
		{
			b[j]=3.0;
		}
		else if(((score[j])<=77)&&((score[j])>=75))
		{
			b[j]=2.7;
		}
		else if(((score[j])<=74)&&((score[j])>=72))
		{
			b[j]=2.3;
		}
		else if(((score[j])<=71)&&((score[j])>=68))
		{
			b[j]=2.0;
		}
		else if(((score[j])<=67)&&((score[j])>=64))
		{
			b[j]=1.5;
		}
		else if(((score[j])<=63)&&((score[j])>=60))
		{
			b[j]=1.0;
		}
		else
		{
			b[j]=0;
		}
	}
	for(k=0;k<n;k++)
	{
		sum2=sum2+(a[k])*(b[k]);
	}
	GPA=(float)sum2/sum1;
	printf("%.2f",GPA);


	return 0;
}
