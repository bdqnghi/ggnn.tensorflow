/*************************
 ***??:??? 1200012776
 ***????:????
 ***??:2012?12?24?
 *************************/
int main()
{
	char string[260] = {0}, substring[50] = {0}, replacement[50] = {0}, temp[50] = {0},
		length, length_s, length_r, i, j, k = 0, m, n;
	cin >> string >> substring >> replacement;
	length = strlen(string);
	length_s = strlen(substring);
	length_r = strlen(replacement);
	for (i = 0; i <= length - length_s; i++)
	{
		memset(temp, 0, sizeof(temp));
		k = 0;
		for (j = i; j < i + length_s; j++)
		{
			temp[k++] = string[j];	//????
		}
		if (!strcmp(temp, substring))	//???
		{
			if (length_s != length_r)	//??????????????,??????
			{
				n = i + length_s;
				for (m = i + length_r; m < length; m++)
				{
					string[m] = string[n++];
				}
			}
			n = 0;
			for (m = i; m < i + length_r; m++)
			{
				string[m] = replacement[n++];
			}
			break;
		}
	}
	cout << string << endl;
	return 0;
}

