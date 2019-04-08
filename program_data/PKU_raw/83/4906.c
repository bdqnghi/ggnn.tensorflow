int main()
{
	int n,i;
	float gpa,score[10]={0},g[10]={0},pow[10]={0},sg,ave,s;
	s=0;ave=0;sg=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%f",&pow[i]);
		s=s+pow[i];
	}
	for (i=0;i<n;i++)
	{
		scanf("%f",&score[i]);
		if(score[i]<=100.0&&score[i]>=90.0)
			g[i]=4.0;
		else if(score[i]<=89.0&&score[i]>=85.0)
			g[i]=3.7;
		else if(score[i]<=84.0&&score[i]>=82.0)
			g[i]=3.3;
		else if(score[i]<=81.0&&score[i]>=78.0)
			g[i]=3.0;
		else if(score[i]<=77.0&&score[i]>=75.0)
			g[i]=2.7;
		else if(score[i]<=74.0&&score[i]>=72.0)
			g[i]=2.3;
		else if(score[i]<=71.0&&score[i]>=68.0)
			g[i]=2.0;
		else if(score[i]<=67.0&&score[i]>=64.0)
			g[i]=1.5;
		else if(score[i]<=63.0&&score[i]>=60.0)
			g[i]=1.0;
		else g[i]=0;
		sg=sg+g[i]*pow[i];
	}
	gpa=sg/s;
	printf("\n%.2f",gpa);
	return 0;
}