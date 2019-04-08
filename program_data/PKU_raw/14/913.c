struct student
{
	int num;
	int yuwen;
	int shuxue;
	int total;
}stu[100000];
void main()
{
	int n,i,j,k;
	struct student temp;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{scanf("%d%d%d",&stu[i].num,&stu[i].yuwen,&stu[i].shuxue);
	stu[i].total=stu[i].yuwen+stu[i].shuxue;}
	for(i=0;i<n-1;i++)
	{	
		k=i;
		for(j=i+1;j<n;j++)
		{if(stu[j].total>stu[i].total)
		{k=j;
		temp=stu[k];stu[k]=stu[i];stu[i]=temp;}
		}if(i==3)break;
	}
	for(i=0;i<3;i++)
	printf("%d %d\n",stu[i].num,stu[i].total);
}