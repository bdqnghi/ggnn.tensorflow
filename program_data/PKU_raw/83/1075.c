void main()
{
	int credit[100],score[100];
	float point[100];
	int n,i; 
	float sum=0,sum1=0,average;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&credit[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&score[i]);
	}
	for(i=0;i<n;i++)
	{
		if(score[i]<=100&&score[i]>=90)
			point[i]=4.0;
		else if(score[i]<=89&&score[i]>=85)
			point[i]=3.7;
		else if(score[i]<=84&&score[i]>=82)
			point[i]=3.3;
		else if(score[i]<=81&&score[i]>=78)
			point[i]=3.0;
		else if(score[i]<=77&&score[i]>=75)
			point[i]=2.7;
		else if(score[i]>=72&&score[i]<=74)
			point[i]=2.3;
		else if(score[i]>=68&&score[i]<=71)
			point[i]=2.0;
		else if(score[i]>=64&&score[i]<=67)
			point[i]=1.5;
		else if(score[i]>=60&&score[i]<=63)
			point[i]=1.0;
		else if(score[i]>=0&&score[i]<=59)
			point[i]=0;
		else
			printf("error");
	}
	for(i=0;i<n;i++)
	{
		sum=sum+credit[i]*point[i];
	}
	for(i=0;i<n;i++)
	{
		sum1=sum1+credit[i];
	}
	average=sum/sum1;
	printf("%.2f",average);
}