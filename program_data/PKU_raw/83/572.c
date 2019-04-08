void main()
{
	int n;
	int xf[10],score[10],a;
	float jd[10],sjd[10],sum,GPA;
	int i,j;
	sum=0.0;
	a=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&xf[i]);
	for(i=0;i<n;i++)
		scanf("%d",&score[i]);
	for(j=0;j<n;j++)
	{
		if(score[j]>=90)
			jd[j]=4.0;
		else if(score[j]>=85)
			jd[j]=3.7;
		else if(score[j]>=82)
			jd[j]=3.3;
		else if(score[j]>=78)
			jd[j]=3.0;
		else if(score[j]>=75)
			jd[j]=2.7;
		else if(score[j]>=72)
			jd[j]=2.3;
		else if(score[j]>=68)
			jd[j]=2.0;
		else if(score[j]>=64)
			jd[j]=1.5;
		else if(score[j]>=60)
			jd[j]=1.0;
		else jd[j]=0;
	}
	for(j=0;j<n;j++)
	{
		sjd[j]=jd[j]*xf[j];
		sum=sum+sjd[j];
		a=a+xf[j];
	}
	GPA=sum/a;
	printf("%.2f",GPA);
}