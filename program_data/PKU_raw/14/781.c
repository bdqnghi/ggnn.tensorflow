int main()
{
	int n;
	scanf("%d",&n);
	struct student{
		int num;
		int chi;
		int math;
		int sum;
	};
	struct student*fig;
	fig=(struct student*)malloc(sizeof(student)*n);
	int i,a=0,b=0,c=0,numa=0,numb=0,numc=0;
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&(fig+i)->num,&(fig+i)->chi,&(fig+i)->math);
		(fig+i)->sum=(fig+i)->chi+(fig+i)->math;
		if((fig+i)->sum>a)
		{
			c=b;
			numc=numb;
			b=a;
			numb=numa;
			a=(fig+i)->sum;
			numa=(fig+i)->num;
		}
		else if((fig+i)->sum>b)
		{
			c=b;
			numc=numb;
			b=(fig+i)->sum;
			numb=(fig+i)->num;
		}
		else if((fig+i)->sum>c)
		{
			c=(fig+i)->sum;
			numc=(fig+i)->num;
		}
	}
	printf("%d %d\n%d %d\n%d %d\n",numa,a,numb,b,numc,c);
	return 0;

}
	