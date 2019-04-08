/*************************************************************************************************************
* @file .cpp
* @author ????
* @date 11.01
* @description
*         
*/


int main()
{
	int j = 0, k = 0, i, m, n, l;
	char gender[7];
	float temp;
	float female[40];
	float male[40];
	cin >> n;
	cin.get();
	for(i = 0; i < n; i++)
	{
		cin >> gender;
		if (strlen(gender) == 6)
		{
			cin >> female[j];
			j++;
		}
		if (strlen(gender) == 4)
		{
			cin >> male[k];
			k++;
		}
	}
	for(m = 0; m < k; m++)
	{
		for(l = m + 1; l < k; l++)
		{
			if (male[m] > male[l])
			{
				temp = male[m];
				male[m] = male[l];
				male[l] = temp;
			}
		}
	}
	for(m = 0; m < j; m++)
	{
		for(l = m + 1; l < j; l++)
		{
			if (female[m] < female[l])
			{
				temp = female[m];
				female[m] = female[l];
				female[l] = temp;
			}
		}
	}
	printf("%.2f",male[0]);	
	for (i = 1; i < k; i++)
	{
		cout <<" ";
		printf("%.2f",male[i]);
	}
	for (i = 0; i < j; i++)
	{
		cout <<" ";
		printf("%.2f",female[i]);
	}
	return 0;
}
