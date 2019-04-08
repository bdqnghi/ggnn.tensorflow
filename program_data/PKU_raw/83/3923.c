

int main()
{
	int n,i;
	scanf("%d",&n);
	int xuefen[n],defen[n];
	int sigma=0;
	double gpa[n];
	double grade=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&xuefen[i]);
		sigma=sigma+xuefen[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&defen[i]);
		if(defen[i]>=90)
		{
			gpa[i]=4.0;
			gpa[i]=gpa[i]*xuefen[i];
			grade=grade+gpa[i];
		}
		else if(defen[i]>=85)
		{
			gpa[i]=3.7;
			gpa[i]=gpa[i]*xuefen[i];
			grade=grade+gpa[i];
		}
		else if(defen[i]>=82)
		{
			gpa[i]=3.3;
			gpa[i]=gpa[i]*xuefen[i];
			grade=grade+gpa[i];
		}
		else if(defen[i]>=78)
		{
			gpa[i]=3.0;
			gpa[i]=gpa[i]*xuefen[i];
			grade=grade+gpa[i];
		}
		else if(defen[i]>=75)
		{
			gpa[i]=2.7;
			gpa[i]=gpa[i]*xuefen[i];
			grade=grade+gpa[i];
		}
		else if(defen[i]>=72)
		{
			gpa[i]=2.3;
			gpa[i]=gpa[i]*xuefen[i];
			grade=grade+gpa[i];
		}
		else if(defen[i]>=68)
		{
			gpa[i]=2.0;
			gpa[i]=gpa[i]*xuefen[i];
			grade=grade+gpa[i];
		}
		else if(defen[i]>=64)
		{
			gpa[i]=1.5;
			gpa[i]=gpa[i]*xuefen[i];
			grade=grade+gpa[i];
		}
		else if(defen[i]>=60)
		{
			gpa[i]=1.0;
			gpa[i]=gpa[i]*xuefen[i];
			grade=grade+gpa[i];
		}
		else if(defen[i]<60)
		{
			gpa[i]=0.0;
			gpa[i]=gpa[i]*xuefen[i];
			grade=grade+gpa[i];
		}
	}
	grade=grade/sigma;
	printf("%.2lf",grade);
	return 0;
}