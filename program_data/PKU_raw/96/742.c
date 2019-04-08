//**********???????13*******************
//**********???????*********************
//**********?????2012?11?9?************
//**********???1200062701******************


int main()
{
	int yushu, sum = 0, beishu = 1E7, weishu = 0;
	double shenyu;
	char a[100];
	memset(a, '@', sizeof( a ));                   //???????
	cin >> a;
	for(int h = 0; h < 100; h++)
	{
		if((a[h] <= '9') && (a[h] >= '0'))
		{
			weishu++;                              //????
		}
	}
	shenyu = weishu;
	if(weishu < 8)                                 //???int???????????~
	{
		beishu = pow(10, (shenyu - 1));            
		for(int i = 0; i < weishu; i++)
		{
			sum += (a[i] - '0') * beishu;
			beishu = beishu / 10;
			shenyu--;
		}
		cout << sum / 13 << endl << sum % 13;
	}
	else                                           //??int??????????
	{
		for(int i = 0; i < 8; i++)
		{
			sum += (a[i] - '0') * beishu;
			beishu = beishu / 10;
			shenyu--;
		}
		cout << sum / 13;
		yushu = sum % 13;
		for(int j = 8; j < 96; j += 8)
		{
			if(shenyu < 9)						   //?????????
			{
				break;
			}
			beishu = 1E7;
			sum = yushu * 1E8;
			for(int l = 0; l < 8; l++)
			{
				sum += (a[l + j] - '0') * beishu;
				beishu = beishu / 10;
				shenyu--;
				if((l == 0) && (sum / 1E7 < 13))   //?????????????0
				{
					cout << "0";
				}
				if((l == 1) && (sum / 1E6 < 13))
				{
					cout << "0";
				}
			}
			cout << sum / 13;
			yushu = sum % 13;
		}
		beishu = pow (10, shenyu - 1); 
		sum = yushu * pow(10, shenyu);
		for(shenyu; shenyu >= 1; shenyu--)          //???????
		{ 
			sum +=  (a[weishu - (int)shenyu] - '0') * beishu;
			beishu = beishu / 10;
			if((weishu - (int)shenyu == 0) && (sum / 1E7 < 13))
			{
				cout << "0";
			}
			if((weishu - (int)shenyu == 1) && (sum / 1E6 < 13))
			{
				cout << "0";
			}
		}
		cout << sum / 13 << endl;
		yushu = sum % 13;
		cout << yushu;
	}
	return 0;
}
