/*
 * 12-4.cpp
 *
 *  Created on: 2011-12-25
 *      Author: sony
 */

int main()
{
	char input[35];
	cin.getline(input, 35);
	int i, j;
	int len = strlen(input);
	for (i = 0; i < len; i++){
		if (input[i] >= '0' && input[i] <= '9') {
			cout << input[i];
			for (j = i + 1; ; j++) {
				if (input[j] >= '0' && input[j] <= '9') {
					cout << input[j];
				} else {
					cout << endl;
					break;
				}

			}
			i = j;
		}
	}
	return 0;
}
