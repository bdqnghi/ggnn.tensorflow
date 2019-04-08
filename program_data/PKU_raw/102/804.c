/*************************
 ***??:??? 1200012776
 ***????:????
 ***??:2012?11?1?
 *************************/
int main()
{
	int i, j, n, num_male = 0, num_female = 0;
	char sex[41][8], man[8] = "male", woman[8] = "female";
	float h[41], t;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> sex[i];	//??????sex[i]
		if (!(strcmp(sex[i],man)))	//??sex[i]?man???
		{
			num_male++;	//???,??num_male??
			cin >> h[num_male];	//????????????
		}
		else	//??????
		{
			num_female++;	//???????
			cin >> h[n + 1 - num_female];	//????????????
		}
	}
	for (i = 1; i <= num_male - 1; i++)	//???????????
	{
		for (j = i; j <= num_male; j++)
		{
			if (h[i] > h[j])
			{
				t = h[i];
				h[i] = h[j];
				h[j] = t;
			}
		}
	}
	for (i = n; i >= num_male + 2; i--)	//???????????
	{
		for (j = i - 1; j >= num_male + 1; j--)
		{
			if (h[i] > h[j])
			{
				t = h[i];
				h[i] = h[j];
				h[j] = t;
			}
		}
	}
	cout << fixed << setprecision(2) << h[1];
	for (i = 2; i <= n; i++)
	{
		cout << " "<< h[i];	//??????
	}
	return 0;
}