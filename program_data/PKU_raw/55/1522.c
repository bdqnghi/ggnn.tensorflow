
int main(int argc, const char *argv[]) {
	int a, b, i, s2[100] =  {
		0
	}
	, s1[100] =  {
		0
	}
	, Sum = 0;
	char str1[100], str2[100];
	cin >> a >> str1 >> b;
	int len1 = strlen(str1);
	for (i = 0; i < len1; i++) {
		//a????????
		if (str1[i] <= 57) {
			//?????????
			s1[i] = str1[i] - '0';
		}
		if (str1[i] >= 65 && str1[i] <= 90) {
			s1[i] = str1[i] - 'A' + 10;
		}
		if (str1[i] > 90) {
			s1[i] = str1[i] - 'a' + 10;
		}
		s2[i] = s1[i] *pow((double)a, len1 - i - 1);
		Sum += s2[i];
	}
	if(Sum == 0) {
		cout << '0';
		return 0;
	}
	for (i = 0; Sum > 0; i++) {
		//??????b??
		if (Sum % b < 10) {
			str2[i] = Sum % b + '0';
		} else {
			str2[i] = Sum % b - 10+'A';
		}
		Sum -= Sum % b;
		Sum /= b;
	}
	str2[i] = '\0';
	int len2 = strlen(str2);
	for (i = len2 - 1; i >= 0; i--) {
		cout << str2[i];
	}
	return 0;
}