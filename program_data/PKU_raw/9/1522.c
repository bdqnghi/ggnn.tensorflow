
struct patient {
	int order;
	int age;
	char id[10];
};

int cmp(const void *a, const void *b) {
	const struct patient *pa = (const struct patient *) a;
	const struct patient *pb = (const struct patient *) b;
	if ((pa->age >= 60) && (pb->age < 60)) {
		return -1;
	}
	else if ((pa->age < 60) && (pb->age >= 60)) {
		return 1;
	}
	else if ((pa->age >= 60) && (pa->age != pb->age)) {
		return pb->age - pa->age;
	}
	else {
		return pa->order - pb->order;
	}
}

int main() {
	int i, num;
	struct patient pat[100];

	scanf("%d", &num);
	for (i = 0; i < num; ++i) {
		pat[i].order = i;
		scanf("%s %d", pat[i].id, &(pat[i].age));
	}

	qsort(pat, num, sizeof(struct patient), cmp);

	for (i = 0; i < num; ++i) {
		printf("%s\n", pat[i].id);
	}
}
