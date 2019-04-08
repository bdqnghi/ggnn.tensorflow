
struct Ill {
	char a[10];
	int age;
};

int main()
{
	int n, i, k;
	int m,l = 0;
	int j = 0;
	struct Ill illMan[100], illOld[100], temp,illOld1[100];
	
	scanf("%d",&n);
	for (i = 0; i < n; i++) {
		scanf("%s %d",illMan[i].a,&illMan[i].age);
	}
	
	for (i = 0; i < n; i++) {
		if (illMan[i].age >= 60) {
			illOld1[j] = illMan[i];
			j++;
		}
	}
	for (i = 0; i < j; i++) {
		m = 0;
		for (k = 0; k < j; k++) {
			if (m < illOld1[k].age) {
				m = illOld1[k].age;
			}
		}
		for (k = 0; k < j; k++) {
			if (illOld1[k].age == m) {
				illOld[l] = illOld1[k];
				illOld1[k].age = 0;
				l++;
				break;
			}
		}
	}
	for (i = 0; i < j; i++) {
		printf("%s\n",illOld[i].a);
	}
	for (i = 0; i < n; i++) {
		if (illMan[i].age < 60) {
			printf("%s\n",illMan[i].a);
		}
	}
	return 0;
}