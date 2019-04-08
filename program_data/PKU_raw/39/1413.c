//?????????

struct student
{
	char name[25];
	int score;
	int cla;
	char leader;
	char west;
	int paper;
};

struct scholar
{
	char name[25];
	int money;
};

struct scholar *scholar(struct student a[],int n)
{
	struct scholar num[100],*p;
	int i;

	for(i=0;i<n;i++)
	{
		num[i].money=0;
		strcpy(num[i].name,a[i].name);
	}
	p=num;

	for(i=0;i<n;i++)
	{
		if(a[i].score>80&&a[i].paper>=1)
			num[i].money+=8000;
		if(a[i].score>85&&a[i].cla>80)
			num[i].money+=4000;
		if(a[i].score>90)
			num[i].money+=2000;
		if(a[i].score>85&&a[i].west=='Y')
			num[i].money+=1000;
		if(a[i].cla>80&&a[i].leader=='Y')
			num[i].money+=850;
	}

	return(p);
}

void main()
{
	int n,sum,i,m,r;
	struct student a[100];
	struct scholar *p;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			scanf("%s %d %d %c %c %d",a[i].name,&a[i].score,&a[i].cla,&a[i].leader,&a[i].west,&a[i].paper);
		}
		else
			scanf("\n%s %d %d %c %c %d",a[i].name,&a[i].score,&a[i].cla,&a[i].leader,&a[i].west,&a[i].paper);
	}

	p=scholar(a,n);

	m=p->money;
	r=0;
	sum=p->money;

	for(i=1;i<n;i++)
	{
		sum+=(p+i)->money;
		if((p+i)->money>m)
		{
			r=i;
			m=(p+i)->money;
		}
	}
	printf("%s\n%d\n%d\n",a[r].name,m,sum);
}



