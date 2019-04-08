int main()
{
	int i = 0;
	int max[2] = {0, 0};
	int min[2] = {100, 0};
	char word[200][100];
	int leg[200];
	while(scanf("%s", word[i]) != EOF)
	{
		leg[i] = strlen(word[i]);
		if (leg[i] > max[0])
		{
			max[0] = leg[i];
			max[1] = i;
		}
		if (leg[i] < min[0])
		{
			min[0] = leg[i];
			min[1] = i;
		}
		i++;
	}
	cout << word[max[1]] << endl;
	cout << word[min[1]] << endl;
	return 0;
}