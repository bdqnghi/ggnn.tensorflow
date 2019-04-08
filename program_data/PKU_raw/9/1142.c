int main()
{
	struct bingren
	{
		char num[10];
		int age;
	};
	int n;
	scanf("%d",&n);
	struct bingren u[1000];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s %d",&u[i].num,&u[i].age);
	}
	struct bingren v[1000];
	int j=0;
    for(i=0;i<n;i++)
	{
		if(u[i].age>59)
		{v[j]=u[i];
		j++;
		}
	}
	int k;
    struct bingren e;
	for(k=1;k<j;k++)
	{
		for(i=0;i<j-k;i++)
		{
			if(v[i].age<v[i+1].age)
			{
				e=v[i+1];
				v[i+1]=v[i];
				v[i]=e;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%s\n",v[i].num);
	}
		for(i=0;i<n;i++)
		{if(u[i].age<60)
		{printf("%s\n",u[i].num);}
		}
	return 0;
}


