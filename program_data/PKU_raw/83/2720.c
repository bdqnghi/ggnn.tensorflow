void main()
{
	int n,i;
	float score[10],sum=0,a[10],c[10],t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%f",&score[i]);
	}
	for(i=0;i<n;i++)
	{
		if(score[i]<=100&&score[i]>=90)c[i]=4;
		else if(score[i]<=89&&score[i]>=85)c[i]=3.7;
		else if(score[i]<=84&&score[i]>=82)c[i]=3.3;
		else if(score[i]<=81&&score[i]>=78)c[i]=3.0;
		else if(score[i]<=77&&score[i]>=75)c[i]=2.7;
		else if(score[i]<=74&&score[i]>=72)c[i]=2.3;
		else if(score[i]<=71&&score[i]>=68)c[i]=2.0;
		else if(score[i]<=67&&score[i]>=64)c[i]=1.5;
		else if(score[i]<=63&&score[i]>=60)c[i]=1.0;
		else c[i]=0;
	}
	for(i=0;i<n;i++)
	{
		t=t+c[i]*a[i];
	}
	printf("%.2f\n",t/sum);
}