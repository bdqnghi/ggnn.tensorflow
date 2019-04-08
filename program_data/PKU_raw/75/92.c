
char temp[5] = {0};
char in[100000] = {0};
char out[100000] = {0};
int intime[1000] = {0};
int outtime[1000] = {0};
int longtime[1000] ={0};

int main()
{
	cin.getline(in,100000);
	cin.getline(out,100000);

	int i, j;
	int p = 0;
	int q = 0;

	for (i = 0; in[i] != '\0'; i++)
	{
		if (in[i] == ',')
		{
			intime[p] = atoi(temp);
			memset(temp,0,5);
			p++;
			q = 0;
			continue;
		}
		temp[q] = in[i];
		q++;
	}

	intime[p] = atoi(temp);
	p++;

	q = p = 0;

	for (i = 0; out[i] != '\0'; i++)
	{
		
		if (out[i] == ',')
		{
			outtime[p] = atoi(temp);
			memset(temp,0,5);
			p++;
			q = 0;
			continue;
		}
		temp[q] = out[i];
		q++;
		
	}

	outtime[p] = atoi(temp);
	p++;

	int x = 0, y = 0;
	int max = 0;

	for (j = 0; j < p ; j++)
	{
		for (x = intime[j]; x < outtime[j]; x++)
		{
			longtime[x]++;
		}
	}

	for (y = 0; y < 1000; y++)
	{
		if (longtime[y] > max)
		{
			max = longtime[y];
		}
	}

	cout << p << " " << max << endl;

	return 0;

}

