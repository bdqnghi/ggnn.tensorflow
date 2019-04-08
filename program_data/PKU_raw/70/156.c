int main()
{
	int n,i,j;
    scanf("%d",&n);
	double num[10][2]={0},a=0,b,dis;
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&num[i][0],&num[i][1]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			b=sqrt((num[j][0]-num[i][0])*(num[j][0]-num[i][0])+
				(num[j][1]-num[i][1])*(num[j][1]-num[i][1]));
			if(b<a)
			{
				dis=a;
			}
			if(b>=a)
			{
				dis=b;
				a=b;
			}

		}
	}
	printf("%.4f",dis);
	return 0;
}
