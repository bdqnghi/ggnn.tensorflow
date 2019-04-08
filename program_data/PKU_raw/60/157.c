
void main()
{
	int max;
	int ss[10000];
	int i,j,k=0;
	int b1=0,b2;

	scanf("%d",&max);
	for (i=2;i<=max;i++)
	{
		b2=0;
		for (j=2;(double)j<=sqrt((double)max)&& j<i;j++)
		{
			if (i%j==0)
			{
				b2=1;
				break;
			}
		}
		if (b2==0)
		{
			ss[k]=i;
			k=k+1;
		}
	}
	if (k==0 || max<5)
		printf("empty");
	else
	{
	for (i=1;i<k;i++)
	{
		if ((ss[i]-ss[i-1])==2)
		{
			if (b1!=0)
				printf("\n");
			printf("%d %d",ss[i-1],ss[i]);
			b1+=1;
		}
	}
	}
}
