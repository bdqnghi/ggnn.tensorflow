
int main()
{
	int n;
	scanf("%d" , &n);
	float sz[100][2];
	float q[100];

	int i,k;

	for(i=0;i<n;i++)
	{
		for(k=0;k<2;k++)
		{
			scanf("%f" , &sz[i][k]);
		}
		q[i]=0;
		q[i] = sz[i][1] / sz[i][0];
	}
	for(i=1;i<n;i++)
	{
		if(q[0]-q[i]>0.05f)
		{
			printf("worse\n");
		}
		if(q[i]-q[0]>0.05f)
		{
			printf("better\n");
		}
		if((q[0]-q[i]<=0.05f)&&(q[i]-q[0]<=0.05f))
		{
			printf("same\n");
		}
	}
	return 0;
}

