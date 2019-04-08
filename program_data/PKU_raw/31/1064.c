struct student
{
	char stuID[20];
	char name[20];
	char sex;
	int age;
	char score[10];
	char add[20];
};
int main()
{
	int i,j;
	struct student stu[5000];
	scanf("%s %s %c %d %s %s",stu[0].stuID,stu[0].name,&stu[0].sex,&stu[0].age,stu[0].score,stu[0].add);
	i=0;
	if(strlen(stu[i].stuID)>=3)
	{
	while(1)
	{
		i++;
		scanf("%s",stu[i].stuID);
		if(strlen(stu[i].stuID)==3)
			break;
		scanf("%s %c %d %s %s",stu[i].name,&stu[i].sex,&stu[i].age,stu[i].score,stu[i].add);
	}
	//printf("#####3");
	for(j=i-1;j>=0;j--)
	{
		printf("%s %s %c %d %s %s\n",stu[j].stuID,stu[j].name,stu[j].sex,stu[j].age,stu[j].score,stu[j].add);
	}
	}
	return 0;
}