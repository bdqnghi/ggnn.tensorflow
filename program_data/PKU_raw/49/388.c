int maxhui(char chuan[], int i)
{
	int k, length = 2;
	for(k = i ;  ; k ++)
	{
		if(chuan[k] == chuan[k - length + 1])
			length += 2;
		else break;
	}
	length -= 2;
	return length;
}



int main()
{
	char chuan[500], huichuan[500][500];
	int i, j, k = 0, length, p;
	cin.getline(chuan, 500, '\n');
	for(i = 1 ; i < strlen(chuan) ; i ++)
	{
		if(chuan[i] ==  chuan[i - 1])
		{
			length = maxhui(chuan, i) / 2;
			for(j = 0 ; j < length ; j ++)
				huichuan[k][j] = chuan[i + j];
			huichuan[k][length] = '\0';
			k++;
		}
	}
	int maxlen[500], maxlength = 0;
	for(i = 0 ; i < k ; i ++)
	{
		if(strlen(huichuan[i]) > maxlength)maxlength = strlen(huichuan[i]);
	}
	for(i = 0 ; i < maxlength ; i ++)
	{
		for(j = 0 ; j < k ; j ++)
		{
			if(strlen(huichuan[j]) > i)
			{
				for(p = i ; p >= 0 ; p --)
				{
					cout << huichuan[j][p];
				}
				for(p = 0 ; p <= i ; p ++)
				{
					cout << huichuan[j][p];
				}
				cout << endl;
			}
		}
	}
	return 0;
}




	