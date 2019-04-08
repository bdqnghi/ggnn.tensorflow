struct student
{
	int xuehao;
	int yuwen;
	int shuxue;
	int zongfen;
}stu[100000];
int main(int argc, char* argv[])
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&stu[i].xuehao,&stu[i].yuwen,&stu[i].shuxue);
		stu[i].zongfen=stu[i].yuwen+stu[i].shuxue;
	}
	int max1=2,max2=1,max3=0,num1=0,num2=0,num3=0;
	for(i=0;i<n;i++)
	{
		if(stu[i].zongfen>max1)
		{
			max3=max2;
			num3=num2;
			max2=max1;
			num2=num1;
			max1=stu[i].zongfen;
			num1=i;
		}else if(stu[i].zongfen<=max1&&stu[i].zongfen>max2)
		{
			max3=max2;
			num3=num2;
			max2=stu[i].zongfen;
			num2=i;
		}else if(stu[i].zongfen<=max2&&stu[i].zongfen>max3)
		{
			max3=stu[i].zongfen;
			num3=i;
		}
	}
	printf("%d %d\n",stu[num1].xuehao,stu[num1].zongfen);
	printf("%d %d\n",stu[num2].xuehao,stu[num2].zongfen);
	printf("%d %d\n",stu[num3].xuehao,stu[num3].zongfen);
	return 0;
}
