int *arrange(int a[],int n);
int main()
{
	//money??
	int money;
	//num ???
	int num;
	for(;;)
	{
		money=0;
		scanf("%d",&num);
		if(num==0)
		{
			break;
		}
		else
		{
			//??????
			//king?tianji????????????
			int king[1000];
			int tianji[1000];
			int i1;
			for(i1=0;i1<=num-1;i1++)
			{
				if(i1==0)
				{
					scanf("%d",&tianji[i1]);
				}
				else
				{
					scanf(" %d",&tianji[i1]);
				}
			}
			for(i1=0;i1<=num-1;i1++)
			{
				if(i1==0)
				{
					scanf("%d",&king[i1]);
				}
				else
				{
					scanf(" %d",&king[i1]);
				}
			}
			//??????
			arrange(tianji,num);
			arrange(king,num);
			//??????
			//head,tail????????????????
			int tianhead=0,kinghead=0;
			int tiantail=num-1,kingtail=num-1;
			//flag??????
			int flag=1;
			for(;flag;)
			{
				if(tianhead==tiantail)
				{
					flag=0;
				}
				if(tianji[tianhead]>king[kinghead])
				{
					money+=200;
					tianhead++;
					kinghead++;
				}
				else if(tianji[tiantail]>king[kingtail])
				{
					money+=200;
					tiantail--;
					kingtail--;
				}
				else
				{
					if(tianji[tiantail]<king[kinghead])
					{
						money-=200;
					}
					tiantail--;
					kinghead++;
				}
			}
			printf("%d\n",money);
		}
	}
					

	return 0;
}
int *arrange(int a[],int n)
{
	//????n-1?
	int i1;
	int position=n-1;
	for(i1=0;i1<=n-1;i1++,position--)
	{
		int i2;
		for(i2=0;i2<=position-1;i2++)
		{
			if(a[i2]<a[i2+1])
			{
				int tmp;
				tmp=a[i2];
				a[i2]=a[i2+1];
				a[i2+1]=tmp;
			}
		}
	}
	return a;
}