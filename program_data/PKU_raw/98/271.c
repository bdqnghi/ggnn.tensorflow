/*
 * assignment.cpp
 *
 *  Created on: 2010-11-23
 *      Author: ??
 *      ????
 */
//???
int main() {
	int n;
	cin >> n;
	char word[100];
	unsigned int len = 0;
	for (int i = 0; i < n; i++) {
		cin >> word;
		len = len + strlen(word)+1 ;
		if (len == strlen(word) + 1){
			cout << word;
			len--;
		}
		else if (len <= 80)
			cout << " " << word;
		else {
			cout << endl << word;
			len = strlen(word) ;
		}
	}
	return 0;
}

