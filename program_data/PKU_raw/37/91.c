/*???????????
  ???
  1000010098*/
int main ()
{
	char a[100001];
	short b[100000];
	int i, t, j, k, len; 
	cin >> t;
	for (k = 1; k <= t; k ++)
	{
		cin >> a;
		len = strlen(a);  //??????
		memset(b,0,200000);
		for(i = 0; i < len; i ++)
		{
			if(b[i] == -1) //???????????
				continue;
			for(j = i + 1; j < len; j ++)
			{
				if(b[j] == -1)
					continue;
				if(a[j] == a[i])
				{
					b[j] --;    //??????
					b[i] ++;    //??????????
				}
			}
			if(b[i] == 0)  //???????
			{
				cout << a[i] << endl;
				break;
			}
		}
		if (i == len)//??????????
			cout << "no" << endl;
	}
	return 0;
}
