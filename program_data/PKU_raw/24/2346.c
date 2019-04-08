//

int main()
{
	char sentence[2000], longist[40], shortist[20];
	int longnum = 0, shortnum = 200, thisnum = 0;
	int i = 0, l = 0, s = 0;
	cin.getline(sentence, 2000);
	do{
		thisnum = 0;
		while(sentence[i] != ',' && sentence[i] != ' ' && sentence[i] != '\0')
		{
			thisnum++;
			i++;
		}
		if (thisnum > longnum)
		{
			longnum = thisnum;
			l = i - thisnum;
		}
		if (thisnum < shortnum)
		{
			s = i - thisnum;
			shortnum = thisnum;
		}
		while(sentence[i] == ' ' || sentence[i] == ',')
			i++;
	}while(sentence[i] != '\0');
	for (i = l; i < l + longnum; i++)
		cout << sentence[i];
	cout << endl;
	for (i = s; i < s + shortnum; i++)
		cout << sentence[i];
	return 0;
}