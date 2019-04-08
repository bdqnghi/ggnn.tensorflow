//**********?????????*****************
//**********???????*********************
//**********?????2012?11?9?************
//**********???1200062701******************


int main()
{
	int totallength = 0, flag = 0;                //??????????
	char a[500];
	cin >> a;                                     //???????
	for(int b = 0; b < 500; b++)
	{
		if(a[b] == 0) break;                      //???????
		else
		{
			totallength++;
		}
	}											  //????????
	for(int length = 2; length <= 500; length ++)
	{
		for(int j = 0; j <= totallength - length + 1; j++)  
		{                                         //????????????
			for(int k = 0; k < length / 2; k++)
			{
				if(a[j + k] == a[j + length - 1 - k])
				{
					flag++;                       //???????
				}
			}
			if(flag == length / 2)                //?????????
			{
				for(int l = j; l <= j + length - 1; l++)
				{
					cout << a[l];
					flag = 0;                     //???????
				}
				cout << endl;                     //???????
			}                                     //??????
			else
			{
				flag = 0;                         //?????????
			}
		}
	}
	return 0;
}
	