struct Student
{
	int num;
	int chn;
	int mth;
	int sum;
};
struct Scr
{
	int num;
	int sum;
};

int main()
{
	struct  Student stu[100000];
	struct  Scr  scr[3];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&stu[i].num,&stu[i].chn,&stu[i].mth);
		stu[i].sum=stu[i].chn+stu[i].mth;
	}
	scr[0].num=stu[0].num;
	scr[0].num=stu[0].num;
	for(i=1;i<n;i++)
    {
        if(stu[i].sum>scr[0].sum)
		{
			scr[0].num=stu[i].num;
			scr[0].sum=stu[i].sum;
		}
    }
	scr[1].num=stu[0].num;
	scr[1].num=stu[0].num;
	for(i=1;i<n;i++)
    {
		if(i!=scr[0].num-1)
		{
			if(stu[i].sum>scr[1].sum)
			{
				scr[1].num=stu[i].num;
				scr[1].sum=stu[i].sum;
			}
		}
    }
	scr[2].num=stu[0].num;
	scr[2].num=stu[0].num;
	for(i=1;i<n;i++)
    {
		if(i==scr[0].num-1||i==scr[1].num-1)
			continue;
		else
		{
			if(stu[i].sum>scr[2].sum)
			{
				scr[2].num=stu[i].num;
				scr[2].sum=stu[i].sum;
			}
		}
    }
	for(i=0;i<3;i++)
	{
		printf("%d %d\n",scr[i].num,scr[i].sum);
	}
	return  0;
}
