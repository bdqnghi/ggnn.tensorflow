void main()
{
	int n,xuefen[10],score[10],i;
	double gpa[10],sum=0,sumxf=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&xuefen[i]);
	for (i=0;i<n;i++)
    	scanf("%d",&score[i]);
	for (i=0;i<n;i++)
	{
		if (score[i]>=90) gpa[i]=4.0;
		else if (score[i]<=89&&score[i]>=85) gpa[i]=3.7;
		else if (score[i]<=84&&score[i]>=82) gpa[i]=3.3;
		else if (score[i]<=81&&score[i]>=78) gpa[i]=3.0;
		else if (score[i]<=77&&score[i]>=75) gpa[i]=2.7;
		else if (score[i]<=74&&score[i]>=72) gpa[i]=2.3;
		else if (score[i]<=71&&score[i]>=68) gpa[i]=2.0;
		else if (score[i]<=67&&score[i]>=64) gpa[i]=1.5;
		else if (score[i]<=63&&score[i]>=60) gpa[i]=1.0;
		else if (score[i]<60) gpa[i]=0;
		sum+=gpa[i]*xuefen[i];
		sumxf+=xuefen[i];
	}
	printf("%.2lf\n",sum/sumxf);
}