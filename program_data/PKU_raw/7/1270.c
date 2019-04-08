//*********************
//* ??? ????   *
//* 1200012878 ??? *
//* 1?2?            *
//*********************
int main()
{
	char a[257], b[257], c[256]; // ???????????????
	cin.getline(a, 257);
	cin.getline(b, 257);
	cin.getline(c, 257); // ????
	int len1 = strlen(a), len2 = strlen(b), len3 = strlen(c); // ??????????
	int i, j, count, flag = -1, m;
	for (i = 0; i <= len1 - 1; i++)
	{
		m = 0;
		if (a[i] == b[m])
		{
			count = 0;
			for (j = i; j <= i + len2 - 1; j++)
			{
				if (a[j] == b[m++])
					count++;
			} // ?????????????
			if (count == len2)
			{
				flag = i;
				break;
			} // ????????????
		}
	}
	if (flag == -1)
		cout << a; // ????????????
	else
	{
		for (i = flag; i <= flag + len2 - 1; i++)
			a[i] = c[i - flag];
		for (i = 0; i <= len1 - 1; i++)
			cout << a[i];
	}
	return 0;
}