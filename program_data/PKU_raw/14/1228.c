

struct student {
	int id;
	int chinese;
	int math;
	int total;
};

int main() {
	int i, num;
	struct student stu[100000];
	int max_0 = 0, max_1 = 0, max_2 = 0;
	int max_0_id, max_1_id, max_2_id;

	scanf("%d", &num);
	for (i = 0; i < num; ++i) {
		scanf("%d %d %d", &(stu[i].id), &(stu[i].chinese), &(stu[i].math));
		stu[i].total = stu[i].chinese + stu[i].math;
		if (stu[i].total > max_0) {
			// update second and third highest
			max_2 = max_1;
			max_2_id = max_1_id;
			max_1 = max_0;
			max_1_id = max_0_id;
			max_0 = stu[i].total;
			max_0_id = stu[i].id;
		}
		else if (stu[i].total > max_1) {
			// update third highest
			max_2 = max_1;
			max_2_id = max_1_id;
			max_1 = stu[i].total;
			max_1_id = stu[i].id;
		}
		else if (stu[i].total > max_2) {
			max_2 = stu[i].total;
			max_2_id  = stu[i].id;
		}
	}

	printf("%d %d\n", max_0_id, max_0);
	printf("%d %d\n", max_1_id, max_1);
	printf("%d %d\n", max_2_id, max_2);

	return 0;
}
