void main()
{
	int i,n,m=0,score;
	float sum=0,a[2][9],GPA;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%f",&(a[0][i]));
	
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&score);
		if(score>=90)a[1][i]=4.0;
		else if(score>=85)a[1][i]=3.7;
		else if(score>=82)a[1][i]=3.3;
		else if(score>=78)a[1][i]=3.0;
		else if(score>=75)a[1][i]=2.7;
		else if(score>=72)a[1][i]=2.3;
		else if(score>=68)a[1][i]=2.0;
		else if(score>=64)a[1][i]=1.5;
		else if(score>=60)a[1][i]=1.0;
		else a[1][i]=0;
	}
	
	for(i=0;i<=n-1;i++)
	{
		sum=a[0][i]*a[1][i]+sum;
		m=m+a[0][i];
	}
	GPA=sum/m;
	printf("%.2f\n",GPA);	
}