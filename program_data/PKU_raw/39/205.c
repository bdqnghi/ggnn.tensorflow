struct list
	{
		char name[20];
		int g1;
		int g2;
		char gb;
		char xb;
		int lw;
		int total;
	};
void main()
{
	
	struct list stu[100];
	int all(struct list stu);
	int i,k,n,sum=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].g1,&stu[i].g2,&stu[i].gb,&stu[i].xb,&stu[i].lw);
	}
	for (i=0;i<n;i++) {stu[i].total=all(stu[i]);sum=sum+stu[i].total;}
	for (k=n-1,i=n-2;i>=0;i--)
	{
		if (stu[k].total<=stu[i].total) k=i;
	}
	printf("%s\n%d\n%d\n",stu[k].name,stu[k].total,sum);
}

int all(struct list stu)
{	stu.total=0;
	if (stu.g1>80 && stu.lw>=1) stu.total+=8000;
	if (stu.g1>85 && stu.g2>80) stu.total+=4000;
	if (stu.g1>90) stu.total+=2000;
	if (stu.g1>85 && stu.xb=='Y') stu.total+=1000;
	if (stu.g2>80 && stu.gb=='Y') stu.total+=850;
	return(stu.total);
}
