void main()
{
	int n,i,j,t;
	struct score
	{int num;
	 int verbal;
	 int math;
	 int sum;
	};
	struct score a[4];
	scanf("%d",&n);
	for(i=0;i<=2;i++)
	{
		scanf("%d%d%d",&a[i].num,&a[i].verbal,&a[i].math);
		a[i].sum=a[i].verbal+a[i].math;
	}
	for(i=0;i<=1;i++)
		for(j=1;j<=2-i;j++)
		{
			if(a[i].verbal+a[i].math<a[i+j].verbal+a[i+j].math)
			{
				t=a[i].num;
				a[i].num=a[i+j].num;
				a[i+j].num=t;
				t=a[i].sum;
				a[i].sum=a[i+j].sum;
				a[i+j].sum=t;
			}
		}
	for(i=3;i<n;i++)
	{
		scanf("%d%d%d",&a[3].num,&a[3].verbal,&a[3].math);
		if(a[3].verbal+a[3].math>a[0].sum)
		{
			t=a[1].num;
			a[1].num=a[0].num;
			a[2].num=t;
			a[0].num=a[3].num;
			t=a[1].sum;
			a[1].sum=a[0].sum;
			a[2].sum=t;
			a[0].sum=a[3].verbal+a[3].math;
		}
		else if(a[3].verbal+a[3].math>a[1].sum)
		{
			a[2].num=a[1].num;
			a[1].num=a[3].num;
			a[2].sum=a[1].sum;
			a[1].sum=a[3].verbal+a[3].math;
		}
		else if(a[3].verbal+a[3].math>a[2].sum)
		{
			a[2].num=a[3].num;
			a[2].sum=a[3].verbal+a[3].math;
		}
	}
	for(i=0;i<=2;i++)
		printf("%d %d\n",a[i].num,a[i].sum);
}