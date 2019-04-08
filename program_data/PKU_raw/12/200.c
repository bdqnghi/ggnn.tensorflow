
int main(void)
{
	int i,j,m,n;
	int num[100], result[100], temp;

	i=0;
	j=0;
	while(1)
	{
		cin >> num[i];
		if(num[i] == -1)
		{
			break;
		}

		while(1)
		{
			if(num[i] == 0)
			{
				temp = 0;
				for(m=0; m<i; m++)
				{
					for(n=0; n<i; n++)
					{
						if(num[m] == 2*num[n])
						{
							temp++;
						}
					}
				}
				result[j] = temp;

				i=0;
				j++;
				break;
			}
			else
			{
				i++;
				cin >> num[i];
			}
		}
	}

	for(m=0; m<j; m++)
	{
		cout << result[m] << endl;
	}
	return 0;
}