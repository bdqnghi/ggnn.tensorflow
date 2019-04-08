struct stu
{
	int num,yu,shu,sum;
} ;
void main()
{
	int n,i;
	struct stu a[4];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[0].num,&a[0].yu,&a[0].shu);
		a[0].sum=a[0].yu+a[0].shu;
		if (a[0].sum>a[1].sum)
		{
			a[3].sum=a[2].sum;
			a[3].num=a[2].num;
			a[2].sum=a[1].sum;
			a[2].num=a[1].num;
			a[1].sum=a[0].sum;
			a[1].num=a[0].num;
		}else
			if (a[0].sum>a[2].sum)
			{
				a[3].sum=a[2].sum;
			    a[3].num=a[2].num;
			    a[2].sum=a[0].sum;
			    a[2].num=a[0].num;
			}
			else if (a[0].sum>a[3].sum)
			{
				a[3].sum=a[0].sum;
			    a[3].num=a[0].num;
			}
	}
	for (i=1;i<=3;i++)
		printf("%d %d\n",a[i].num,a[i].sum);
}