
int main()
{
    int N,i,sum,max,k,total=0;
	int t[100];
	struct student
	{
		char name[40];
		int grade1;
		int grade2;
		char monitor;
		char western;
		int num;
	};
	struct student stu[100];
	scanf("%d",&N);
	for(i=0;i<N;i++)
		{
			scanf("%s%d%d%s%s%d",stu[i].name,&stu[i].grade1,&stu[i].grade2,&stu[i].monitor,&stu[i].western,&stu[i].num);
		}	

	for(i=0;i<N;i++)
	{
		sum=0;
		if(stu[i].grade1>80 && stu[i].num>=1)
			sum+=8000;
		if(stu[i].grade1>85 && stu[i].grade2>80)
			sum+=4000;
		if(stu[i].grade1>90)
			sum+=2000;
		if(stu[i].grade1>85 && stu[i].western=='Y')
			sum+=1000;
		if(stu[i].grade2>80 && stu[i].monitor=='Y')
			sum+=850;
		t[i]=sum;
	}
    max=0;
	for(i=0;i<N;i++)
	{
		if(t[i]>max)
		{
			max=t[i];
			k=i;
		}
	}
	for(i=0;i<N;i++)
		total+=t[i];
	printf("%s\n%d\n%d\n",stu[k].name,max,total);
    return 0;
}