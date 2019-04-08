struct student
{
	char name[20];
	int fs;
	int cs;
	char gb;
	char xb;
	int paper;
	int sch;
}stu[100];
int ys(int a,int b);
int ws(int a,int b);
int cj(int a);
int xibu(int a,char b);
int bj(int a,char b);
int main()
{
	int n=0,i=0,sum=0,k=0,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].fs,&stu[i].cs,&stu[i].gb,&stu[i].xb,&stu[i].paper);
		stu[i].sch=0;
	}
	for(i=0;i<n;i++)
	{
		if(ys(stu[i].fs,stu[i].paper)==1)
		{
			stu[i].sch+=8000;
			sum+=8000;
		}
		if(ws(stu[i].fs,stu[i].cs)==1)
		{
			stu[i].sch+=4000;
			sum+=4000;
		}
		if(cj(stu[i].fs)==1)
		{
			stu[i].sch+=2000;
			sum+=2000;
		}
		if(xibu(stu[i].fs,stu[i].xb)==1)
		{
			stu[i].sch+=1000;
			sum+=1000;
		}
		if(bj(stu[i].cs,stu[i].gb)==1)
		{
			stu[i].sch+=850;
			sum+=850;
		}
	}
	k=stu[0].sch;
	for(i=0;i<n;i++)
	{
		if(k<stu[i].sch)
		{
			j=i;
			k=stu[i].sch;
		}
	}
	printf("%s\n%d\n%d",stu[j].name,stu[j].sch,sum);
	return 0;
}
int ys(int a,int b)
{
	if(a>80&&b>=1)
	{return 1;}
	else return 0;
}
int ws(int a,int b)
{
	if(a>85&&b>80)
	{return 1;}
	else return 0;
}
int cj(int a)
{
	if(a>90)
	{return 1;}
	else return 0;
}
int xibu(int a,char b)
{
	if(a>85&&b=='Y')
	{return 1;}
	else return 0;
}
int bj(int a,char b)
{
	if(a>80&&b=='Y')
	{return 1;}
	else return 0;
}
