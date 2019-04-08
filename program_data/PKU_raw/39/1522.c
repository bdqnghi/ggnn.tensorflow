

struct Student {
	char name[21];
	int grade;
	int eval;
	char clasAsi;
	char west;
	int essay;
	int total;
};

int main()
{
	int n, i;
	int totalMoney = 0;
	int money = 0;
	struct Student stu[100];
	
	scanf("%d",&n);
	for (i = 0; i < n; i++) {
		scanf("%s%d%d %c %c%d",stu[i].name,&stu[i].grade,&stu

[i].eval,&stu[i].clasAsi,&stu[i].west,&stu[i].essay);
		stu[i].total = 0;
		if (stu[i].grade > 80 && stu[i].essay > 0) {
			stu[i].total = stu[i].total + 8000;
		}
		if (stu[i].grade > 85 && stu[i].eval > 80) {
			stu[i].total = stu[i].total + 4000;
		}
		if (stu[i].grade > 90) {
			stu[i].total = stu[i].total + 2000;
		}
		if (stu[i].grade > 85 && stu[i].west == 'Y') {
			stu[i].total = stu[i].total + 1000;
		}
		if (stu[i].eval > 80 && stu[i].clasAsi == 'Y') {
			stu[i].total = stu[i].total + 850;
		}
	}
	
	for (i = 0; i < n; i++) {
		if (stu[i].total > money) {
			money = stu[i].total;
		}
		totalMoney = totalMoney + stu[i].total;
	}
	for (i = 0; i < n; i++) {
		if(stu[i].total == money){
			printf("%s\n%d\n",stu[i].name,money);
			break;
		}
	}
	printf("%d",totalMoney);
	return 0;
}