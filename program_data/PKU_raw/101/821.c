/*
 * bifanliang.cpp
 *
 *  Created on: 2012-10-19
 *      Author: 99003
 */

int main() {
	int a, b, c;
	int i,j,t;
	int sum1, sum2, sum3;
	int arr[10];
	char name[10];
	for (a = 0; a <= 2; a = a + 1) {//abc???10 2??????
		for (b = 0; b <= 2; b = b + 1) {
			for (c = 0; c < 2; c = c + 1) {
				if (a != b && b != c && a != c) {
					sum1 = (b > a) + (c == a);
					sum2 = (a > b) + (a > c);
					sum3 = (c > b) + (b > a); //sum????????
					if (a + sum1 == b + sum2 && b + sum2 == c + sum3) {
						arr[0] = a; //???????
						arr[1] = b;
						arr[2] = c;
						name[0] = 'A';
						name[1] = 'B';
						name[2] = 'C';
						name[3] = '\0';
						for (i = 0; i < 3; i++)
							for (j = i + 1; j < 3; j++)
								if (arr[i] > arr[j]) {
									t = arr[i];
									arr[i] = arr[j];
									arr[j] = t;
									t = name[i];
									name[i] = name[j];
									name[j] = t;
								}
						cout << name[0]<<name[1]<<name[2];

					}
				}
			}
		}
	}
	return 0;
}
