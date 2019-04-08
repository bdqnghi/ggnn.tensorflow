//****************************************
//*?????                           **
//*?????? 1100012763              **
//*???2011.10.20                     **
//****************************************
int main() 
{
	int i , j , t , count , ans;              //count??????????ans???
	int num[17];

	while (1)                                 //?????????-1?break
	{
		i = 1;
		cin >> num[i];
		if (num[i] == -1)
			break;
		ans = 0;
		do                                    //???????????0
		{
			i++;
			cin >> num[i];
		} while (num[i] != 0);
		count = i - 1;                        //0??????

		for (i = 1; i <= count - 1; i++)      //????????????????
			for (j = 1; j <= count - i; j++)
			{
				if (num[j] > num[j + 1])
				{
					t = num[j];
					num[j] = num[j + 1];
					num[j + 1] = t;
				}
			}

		for (i = 1; i <= count -1; i++)       //??
			for (j = i + 1; j <= count; j++)
			{
				if (num[i] * 2 == num[j])     //??2??ans+1???????
				{
					ans++;
					break;
				}
				else
				{
					if (num[i] * 2 < num[j])  //????2???????????2????????????
						break;
				}
			}

		cout << ans << endl;                  //?????
	}

	return 0;
}
