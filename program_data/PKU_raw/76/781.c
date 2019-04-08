void main()
{
	int n,i,j,pd=1,num[50000][2],max=0,min,qj[10000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&num[i][0],&num[i][1]);
		if(num[i][1]>=max)
			max=num[i][1];
		for(j=num[i][0];j<num[i][1];j++)
		{
			qj[j*2]=1;
			qj[j*2+1]=1;
		}
		qj[j*2]=1;
	}
	for(j=0;j<=max*2;j++)
	{
		if(qj[j]==1)
		{		
			min=j*0.5;
			for(;j<=max*2;j++)
			{
				if(qj[j]==0)
				{
					printf("no");
					pd=0;
				}
			}
			if(pd==1)
				printf("%d %d",min,max);
			else
				break;
		}
	}
}