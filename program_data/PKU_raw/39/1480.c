
struct student 
{
	char name[21];
	int qimo;
	int pingyi;
	char ganbu;
	char xibu;
	int paper;
	int money;
};

int main()
{
	int n,i,j,e,moneyzong=0;
	char name1[21];
	scanf("%d",&n);
	struct student*a=(struct student*)malloc(sizeof(struct student)*n);
	for(i=0;i<n;i++)
	{
		a[i].money=0;
	}
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",a[i].name,&a[i].qimo,&a[i].pingyi,&a[i].ganbu,&a[i].xibu,&a[i].paper);
		if(a[i].qimo>80&&a[i].paper>=1)
			a[i].money+=8000;
		if(a[i].qimo>85&&a[i].pingyi>80)
			a[i].money+=4000;
		if(a[i].qimo>90)
			a[i].money+=2000;
		if(a[i].qimo>85&&a[i].xibu=='Y')
			a[i].money+=1000;
		if(a[i].pingyi>80&&a[i].ganbu=='Y')
			a[i].money+=850;
	}
	for(i=0;i<n;i++)
	{
		moneyzong+=a[i].money;
	}

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[i].money>=a[i+1].money)
			{
				e=a[i].money;
				a[i].money=a[i+1].money;
				a[i+1].money=e;
				strcpy(name1,a[i].name);
				strcpy(a[i].name,a[i+1].name);
				strcpy(a[i+1].name,name1);
			}

		}
	}
	

	printf("%s\n%d\n%d\n",a[n-1].name,a[n-1].money,moneyzong);
	return 0;
}

