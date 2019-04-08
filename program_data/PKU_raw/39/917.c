struct file
{
	char name[50];
	int exam;
	int judge;
	char worker;
	char west;
	int paper;
	int scholarship;
};
int yuanshi(int exam,int paper)
{
	if(exam>80&&paper>=1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int wusi(int exam,int judge)
{
	if(exam>85&&judge>80)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int chengji(int exam)
{
	if(exam>90)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int xibu(int exam,char west)
{
	if(exam>85&&west=='Y')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int banji(int judge,char worker)
{
	if(judge>80&&worker=='Y')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	struct file a[110];
	int i,n,sum=0,max=0,orient;
	for(i=1;i<=110;i++)
	{
		a[i-1].scholarship=0;
	}
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s %d %d %c %c %d",&a[i].name,&a[i].exam,&a[i].judge,&a[i].worker,&a[i].west,&a[i].paper);
		if(yuanshi(a[i].exam,a[i].paper))
		{
			a[i].scholarship+=8000;
		}
		if(wusi(a[i].exam,a[i].judge))
		{
			a[i].scholarship+=4000;
		}
		if(chengji(a[i].exam))
		{
			a[i].scholarship+=2000;
		}
		if(xibu(a[i].exam,a[i].west))
		{
			a[i].scholarship+=1000;
		}
		if(banji(a[i].judge,a[i].worker))
		{
			a[i].scholarship+=850;
		}
		sum+=a[i].scholarship;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i].scholarship>max)
		{
			max=a[i].scholarship;
			orient=i;
		}
	}
	printf("%s\n%d\n%d",a[orient].name,max,sum);
}