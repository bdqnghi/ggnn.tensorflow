


struct person
{
	char name[30];
	int qimo;
	int banji;
	char ganbu[5];
	char xibu[5];
	int lunwen;
	int yuanshijiangxue;
	int wusijiangxue;
	int chengjiyouxiu;
	int xibujiangxue;
	int banjigongxian;
	int total;
}student[110];

int main()
{
	int n, i, all=0, max=0, whom=-1;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%s", student[i].name);
		scanf("%d", &student[i].qimo);
		scanf("%d", &student[i].banji);
		scanf("%s", student[i].ganbu);
		scanf("%s", student[i].xibu);
		scanf("%d", &student[i].lunwen);
	}

	for(i=0; i<n; i++)
	{
		if(student[i].lunwen>0 && student[i].qimo>80)
		{
			student[i].yuanshijiangxue=8000;
		}
		else
		{
			student[i].yuanshijiangxue=0;
        }
	}

	for(i=0; i<n; i++)
	{
		if(student[i].qimo>85 && student[i].banji>80)
		{
			student[i].wusijiangxue=4000;
		}
		else
		{
			student[i].wusijiangxue=0;
		}
	}

	for(i=0; i<n; i++)
	{
		if(student[i].qimo>90)
		{
			student[i].chengjiyouxiu=2000;
		}
		else
		{
			student[i].chengjiyouxiu=0;
		}
	}

	for(i=0; i<n; i++)
	{
		if(student[i].xibu[0]=='Y' && student[i].qimo>85)
		{
			student[i].xibujiangxue=1000;
		}
		else
		{
			student[i].xibujiangxue=0;
		}
	}

	for(i=0; i<n; i++)
	{
		if(student[i].banji>80 && student[i].ganbu[0]=='Y')
		{
			student[i].banjigongxian=850;
		}
		else
		{
			student[i].banjigongxian=0;
		}
	}

	for(i=0; i<n; i++)
	{
		student[i].total=student[i].yuanshijiangxue+student[i].wusijiangxue+student[i].chengjiyouxiu+student[i].xibujiangxue+student[i].banjigongxian;
	}

	for(i=0; i<n; i++)
	{
		all=all+student[i].total;
	}

	for(i=n-1; i>=0; i--)
	{
		if(student[i].total>=max)
		{
			max=student[i].total;
			whom=i;
        }
	}

	printf("%s\n", student[whom].name);
	printf("%d\n", student[whom].total);
	printf("%d", all);

	
	return 0;
}