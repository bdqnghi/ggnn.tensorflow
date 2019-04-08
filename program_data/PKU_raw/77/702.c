
char temp[1000000];
char a,b;

void find (void);

int main (void)
{
	cin.getline(temp,1000000);
	a = temp[0];
	b = temp[strlen(temp)-1];
	find ();

	return 0;
}

void find (void)
{
	int i, index_1, index_2;
	for (i = 0; temp[i] != '\0'; i++)
	{
		if (temp[i] == b)
		{
			index_1 = i;
			temp[i] = ' ';
			break;
		}
	}
	if (temp[i] == '\0')
		return;

	for ( i = index_1; ;i--)
	{
		if (temp[i]==a )
		{
			index_2 = i;
			temp [i] = ' ';
			break;
		}
	}
	cout << index_2<<' '<<index_1 << endl;
	find();
	return;
}

