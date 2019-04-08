char queue[100];
int main ()
{
	cin >> queue;
	int len = strlen(queue), i, j, temp;
	for (i = 0; i < len - 1;)
	{
		if (queue[len - 1] == ' ')
			break;
		if (queue[i] != ' ')
		{
			if (queue[i + 1] == queue[i])
			{
				i++;
				continue;
			}
			else if (queue[i + 1] == ' ')
			{
				j = i + 1;
				while(queue[j] == ' ')
					j++;
				if (queue[j] != queue[i])
				{
					cout << i << " " << j << endl;
					queue[i] = queue[j] = ' ';
					if (i == 0)
						continue;
					temp = i - 1;
					while (queue[temp] == ' ')
						temp--;
					i = temp;
				}
				else
					i = j;
			}
			else
			{
				if (queue[i] == queue[0])
				{
					cout << i << " " << i + 1 << endl;
					queue[i] = ' ';
					queue[i + 1] = ' ';
					if (i == 0)
						continue;
					temp = i - 1;
					while (queue[temp] == ' ')
						temp--;
					i = temp;
				}
			}
		}
		else
		{
			i++;
			continue;
		}
	}
	return 0;
}
