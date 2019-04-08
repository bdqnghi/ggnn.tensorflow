/*
 * 1.cpp
 *
 *  Created on: 2012-12-10
 *      Author: ???
 *      Function:????
 */

int main() {
	int space;
	cin >> space;
	char str[10000], empty[10];
	int l[1000] = { 0 };
	cin.getline(empty, 10);
	cin.getline(str, 10000);
	int k = strlen(str);

	char *p = str;
	*(p + k) = ' ';
	int *len = l;
	int sum = 0, num = 0;//?????????
	while (sum < space) {

		while (*p != ' ') {
			if (!sum)
				cout << *p;
			p++;
			(*len)++;
		}

		//cout<<*len;
		if (sum) {
			for (char *x = p - *len - 1; x < p; x++) {
				if (num - 1 <= 80 && num + *len > 80) {
					*(p - *len - 1) = '\n';
					num = 0;
				} else if (num + *len <= 80)
					*(p - *len - 1) = ' ';

				cout << *x;
			}
		}
		num += *len + 1;
		//cout << " ";
		p++;
		sum++;
		len++;
		//cout << sum << " " << num;
	}

	return 0;
}
