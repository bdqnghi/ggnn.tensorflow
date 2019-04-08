int main()
{
	int n;
	int *a,*index;
	int i,j;
	int result;
	cin >> n;
	a = (int *)malloc(n*n*sizeof(int));
	index = (int *)malloc(n*sizeof(int));
	for (i=0;i<n;i++)
	{
		*(index+i) = i;
	}

	while (1)
	{
		cin >> i >> j;

		if (i==0&&j==0)
		{
			break;
		}
		else
		{
			*(a+n*j+i) = 1;
		}
	}

	for (i=n-1;i>=1;i--)
	{
		if (1 == *(a+n*index[i]+index[i-1]))
		{
			index[i-1] = index[i];
		}
	}


	result = -1;
	for (i=0;i<n;i++)
	{
		if(0 == *(a+n*index[0]+i))
		{
			if (index[0]!=i)
			{
				cout << "NOT FOUND";
				free(a);
				a = NULL;
				free(index);
				index = NULL;
				return 0;
			}
		}
	}

	for (i=0;i<n;i++)
	{
		if(1 == *(a+n*i+index[0]))
		{
			cout << "NOT FOUND";
			free(a);
			a = NULL;
			free(index);
			index = NULL;
			return 0;
		}
	}

	cout << index[0];
	free(a);
	a = NULL;
	free(index);
	index = NULL;
	return 0;
}
