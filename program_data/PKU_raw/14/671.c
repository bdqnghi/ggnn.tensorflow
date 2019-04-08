struct score {
	int id;
	int chinese;
	int maths;
	int sum;
};
int main() {
	score *p[100000], *temp, stu[100000];
	int i, j, n;
	cin >> n;
	for (i = 0; i < n; i++) { //????p????stu??
		p[i] = &stu[i];
		cin >> p[i]->id >> p[i]->chinese >> p[i]->maths;
		p[i]->sum = p[i]->chinese + p[i]->maths;
	}
	for (i = 0; i < 3; i++) //???????????
		for (j = n - 1; j > i; j--)
			if (p[j]->sum > p[j - 1]->sum) { //????????????
				temp = p[j];
				p[j] = p[j - 1];
				p[j - 1] = temp;
			}
	for (i = 0; i < 3; i++) //?????
		cout << p[i]->id << ' ' << p[i]->sum << endl;
	return 0;
}
