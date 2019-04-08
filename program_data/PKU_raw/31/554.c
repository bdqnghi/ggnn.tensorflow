struct student
{
	char num[12];
	char name[25];
	char sex;
	int age;
	char score[6];
	char add[12];
}stu[max];
int main()
{
	int i,n,j;
	for(i=0;;i++)
	{
		scanf("%s",stu[i].num);
		if(stu[i].num[0]=='e')
		{
			break;
		}
		else
		scanf("%s %c %d %s %s",stu[i].name,&stu[i].sex,&stu[i].age,stu[i].score,stu[i].add);
	}
	if(i==0)
		printf("\n");
	else
	{
	for(j=i-1;j>=0;j--)
		printf("%s %s %c %d %s %s\n",stu[j].num,stu[j].name,stu[j].sex,stu[j].age,stu[j].score,stu[j].add);
	}
	return 0;
}
