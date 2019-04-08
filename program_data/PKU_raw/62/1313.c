int main() {
	int del = 0;
	char word[100];
	cin.getline(word, 100);
	int len = strlen(word);
	for (int i = 1; i < len; i++)
		if (*(word + i) == ' ' && *(word + i - 1) == ' ') //????
		{
			del++; //?????????1
			for (int j = i; j < len - del; j++) //?????????
				*(word + j) = *(word + j + 1);
			i--; //?????????
		}
	for (int k = 0; k < len - del; k++) //?????????
		cout << *(word + k);
	return 0;
}
