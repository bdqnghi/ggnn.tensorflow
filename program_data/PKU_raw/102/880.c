

int main()
{
	int n;
	int i,j;
	double tmph;
	int count=0;
	char tmp[10];
	int state=0;
	struct info
	{
		char sex[10];
		double h;
	}
	stu[50];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s %lf",stu[i].sex,&stu[i].h);
		if (strcmp(stu[i].sex,"male")==0)
		{
			count++;
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=i;j<n;j++)
		{
			if (strcmp(stu[i].sex,stu[j].sex)<0)
			{
				strcpy(tmp,stu[i].sex);
				strcpy(stu[i].sex,stu[j].sex);
				strcpy(stu[j].sex,tmp);
				tmph=stu[i].h;
				stu[i].h=stu[j].h;
				stu[j].h=tmph;	
			}
		}
	}
	for (i=0;i<count;i++)
	{
		for (j=0;j<count;j++)
		{
			if (stu[i].h<stu[j].h)
			{
				tmph=stu[i].h;
				stu[i].h=stu[j].h;
				stu[j].h=tmph;	
			}
		}
	}
	for (i=count;i<n;i++)
	{
		for (j=count;j<n;j++)
		{
			if (stu[i].h>stu[j].h)
			{
				tmph=stu[i].h;
				stu[i].h=stu[j].h;
				stu[j].h=tmph;	
			}
		}
	}
	for (i=0;i<n;i++)
	{
		if (state)
		{
			printf(" %.2lf",stu[i].h);
		}
		else
		{
			printf("%.2lf",stu[i].h);
			state=1;
		}
	}
	return 0;
}