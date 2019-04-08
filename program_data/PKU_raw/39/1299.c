



int cpu(int term_end,int class_talk,char stu_staff,char stu_west,int thesis_num)
{
	int money =0;
	if(term_end > 80 && thesis_num >=1)
		money += 8000;
	if(term_end > 85 && class_talk > 80)
		money += 4000;
	if(term_end > 90)
		money += 2000;
	if(term_end >85 && stu_west =='Y')
		money += 1000;
	if(class_talk > 80 && stu_staff =='Y')
		money += 850;
	return money;
}
int main()
{

	int stu_num;
	char name[21];
	int term_end;
	int class_talk;
	char stu_staff;
	char stu_west;
	int thesis_num;
	scanf("%d",&stu_num);

	int stu_max = -1,stu_money,money =0;
	char stu_name[21];
	for(int i =0; i < stu_num; i++)
	{
		scanf("%s %d %d %c %c %d",
			name,&term_end,&class_talk,&stu_staff,&stu_west,&thesis_num);
		stu_money = cpu(term_end,class_talk,stu_staff,stu_west,thesis_num);
		if(stu_money > stu_max)
		{
			stu_max = stu_money;
			strcpy(stu_name,name);
		}
		money += stu_money;
	}
	printf("%s\n%d\n%d",stu_name,stu_max,money);
	return 0;
}