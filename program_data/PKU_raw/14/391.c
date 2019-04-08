/*
 * xue sheng cheng ji tong ji.cpp
 *
 *  Created on: 2010-12-26
 *      Author: taoshibo
 */
int main() {
	int n = 0, i = 0, j = 0;
	cin >> n;
	struct student {//??????????????
		int stuid;
		int chin;
		int math;
	} stu[n], t;
	for (i = 0; i < n; i++) {//???? ???????
		cin >> stu[i].stuid >> stu[i].chin >> stu[i].math;
	}
	for (i = 0; i < 3; i++)//?????
		for (j = 0; j < n - 1; j++)
			if ((stu[j].chin + stu[j].math) >= (stu[j + 1].chin
					+ stu[j + 1].math)) {
				t = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = t;
			}
	for (i = n-1; i > n-4; i--)//?????
		cout << stu[i].stuid << " " << stu[i].chin + stu[i].math << endl;
	return 0;
}
