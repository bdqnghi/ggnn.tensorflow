int main()
{
	char sentence[101], change[101];
	int i;
	char *point = NULL;
	memset(change, '\0', sizeof(change));
	cin.getline(sentence, 101);
	point = sentence;
	for (i = 0; i < strlen(sentence) - 1; i++)
	{
		change[i] = *(point + i) + *(point + i + 1);
	}
	change[strlen(sentence) - 1] = *point + *(point + strlen(sentence) - 1);
	cout << change << endl;
	return 0;
}