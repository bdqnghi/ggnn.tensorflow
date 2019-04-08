struct scholarship
{
	char name[21];
	int test;
	int judge;
	char job;
	char west;
	int paper;
	int sum;
};

int main()
{
	int i=0,k=0,n=0,total=0;
	struct scholarship data[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",data[i].name,&data[i].test,&data[i].judge,&data[i].job,&data[i].west,&data[i].paper);
	}
	for (i=0;i<n;i++)
	{
		data[i].sum=0;
		if ((data[i].test>80)&&(data[i].paper>=1)) { data[i].sum=data[i].sum+8000; total=total+8000;}
		if ((data[i].test>85)&&(data[i].judge>80)) { data[i].sum=data[i].sum+4000; total=total+4000;}
		if (data[i].test>90) { data[i].sum=data[i].sum+2000; total=total+2000;}
		if ((data[i].test>85)&&(data[i].west=='Y')) { data[i].sum=data[i].sum+1000; total=total+1000;}
		if ((data[i].judge>80)&&(data[i].job=='Y')) { data[i].sum=data[i].sum+850; total=total+850;}
	}
	for (i=1,k=0;i<n;i++)
	{
		if (data[k].sum<data[i].sum) k=i;
	}
	printf("%s\n%d\n%d\n",data[k].name,data[k].sum,total);
	return 0;
}
