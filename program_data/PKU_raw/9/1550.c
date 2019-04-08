// ??(14-6) ????.cpp : Defines the entry point for the console application.
//


struct patient
{
	char id[20];
	int age;
	int num;
};

int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	struct patient p[100];
	for(i=1;i<=n;++i)
	{
		scanf("%s%d",&p[i].id,&p[i].age);
		p[i].num=i;
	}
	for(i=1;i<=n-1;++i)
	{
		for(j=i+1;j<=n;++j)
		{
			if(p[j].age>p[i].age)
			{
				struct patient t;
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
	for(i=1;p[i].age>=60;++i)
	{
		for(j=i+1;p[j].age==p[i].age;++j)
		{
			if(p[i].num>p[j].num)
			{
				struct patient t;
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
		printf("%s\n",p[i].id);
	}
	for(j=i;j<=n;++j)
	{
		int k;
		for(k=j+1;k<=n;++k)
		{
			if(p[j].num>p[k].num)
			{
				struct patient t;
				t=p[j];
				p[j]=p[k];
				p[k]=t;
			}
		}
		printf("%s\n",p[j].id);
	}
	return 0;
}

