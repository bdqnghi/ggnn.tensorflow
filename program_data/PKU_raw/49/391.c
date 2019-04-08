
void find (char target[])//??
{
	int count = 0;
	int i,j,k;
	int flag;
	char change[500];
	for (i = 0;i <= 500;i++)//????????
	{
		if (target[i] != '\0')
			count++;
		else
			break;
	}
	for (i = 2;i <= count;i++)//??????
	{
		for (j = 0;j <= count - i;j++)//????????
		{
			flag = 1;
			for (k = j;k <= j + i - 1;k++)
				change[k] = target[k];
			for (k = 0;k <= i / 2 - 1;k++)//???????????
			{
				change[j + k] = target[j + i - 1 - k];
				change[j + i - 1 - k] = target[j + k];
			}
			for (k = 0;k < i - 1;k++)
			{
				if (change[j + k] != target[j + k])
					flag = 0;
			}
			if (flag == 1)//?????????????
			{
				for (k = j;k <= j + i - 1;k++)
					cout<<target[k];
				cout<<endl;
			}
		}
	}
}

int main()
{
	char target[500];
	cin.getline(target,500);
	find(target);
	return 0;
}