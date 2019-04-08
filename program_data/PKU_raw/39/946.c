struct student
{
	char name[21];
	int chengji;
	int pingyi;
	char ganbu;
	char xibu;
	int lunwen;
	int sum;
};

int main()
{
	struct student stu[100],temp;
	int n,i,j,r=1,final=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d%d %c %c %d",stu[i].name,&stu[i].chengji,&stu[i].pingyi,&stu[i].ganbu,&stu[i].xibu,&stu[i].lunwen);
		stu[i].sum=0;
        if(stu[i].chengji>80&&stu[i].lunwen>0)
			stu[i].sum+=8000;
		if(stu[i].chengji>85&&stu[i].pingyi>80)
			stu[i].sum+=4000;
		if(stu[i].chengji>90)
			stu[i].sum+=2000;
		if(stu[i].chengji>85&&stu[i].xibu=='Y')
            stu[i].sum+=1000;
		if(stu[i].pingyi>80&&stu[i].ganbu=='Y')
            stu[i].sum+=850;
	}
	for(i=0;i<n;i++)
	    final=final+stu[i].sum;
	for(i=1;i<n;i++)
		for(j=0;j<n-i;j++)
			if(stu[j].sum<stu[j+1].sum)
			{
				temp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=temp;
			}
	for(i=1;i<n;i++)
	{
		if(stu[i].sum==stu[0].sum)
			r++;
		else
			break;
	}

	printf("%s\n%d\n%d\n",stu[0].name,stu[0].sum,final);
	return 0;
}
