//********************************************************
//*  ???:2.cpp                                        *
//*  ??????    1200012948                          *
//*  ????: 2012 12 24                                *
//*  ????:????                                   *
//********************************************************
int main()
{
	int len1, len2, len3, i, j, m, p, flag = 0;
	char str1[300], str2[50], str3[50];
	cin.getline(str1, 300);
	cin.getline(str2,50);
	cin.getline(str3, 50);
	len1 = strlen(str1);
	len2 = strlen(str2);
	len3 = strlen(str3);
	for (i = 0; i <= len1 - len2; i++)
	{
		flag = 0;
		m = i;
		for(j = 0; j < len2; j++)
		{
			if(str1[m++] != str2[j])
				break;
		}
		if(j == len2)    //????????
		{
			for(p = 0; p < i; p++)
				cout << str1[p];
			cout << str3;
			cout << str1 + i + len2 << endl;
			flag = 1;   //????
			break;
		}
	}
	if(flag == 0)
	{
		cout << str1 << endl;
	}
	return 0;
}
