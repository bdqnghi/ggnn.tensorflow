/************************************
2.cpp
???Nov 9, 2011
??(12.9) ????
?? 1100012886
************************************/

/*
         note:
         0-48
         A-65
         a-97
*/

char str[100], res[100]; //???????????
int a, b, decimal = 0; //decimal??????10???????

void fix() //?????????????????
{
	int i = 0;
	do
	{
		if (str[i] > 96) str[i] = str[i] - 32;
		i++;
	} while (str[i] != '\0');
}

void turn1() //?????????10??
{
	int i = 0, t; //t??????????
	do
	{
		if (str[i] > 64) t = str[i] - 55; else t = str[i] - 48;
		decimal = decimal * a + t;
		i++;
	} while (str[i] != '\0');
}

void turn2() //???10?????b?????
{
	int i = 0, j, t; //t??????????
	//????
	while (decimal >= b)
	{
		t = decimal % b;
		if (t > 9) res[i] = t + 55; else res[i] = t + 48;
		decimal = decimal / b;
		i++;
	}
	t = decimal % b;
	if (t > 9) res[i] = t + 55; else res[i] = t + 48;
	//????
	for (j = i; j >= 0; j--) cout << res[j];
}

int main()
{
	cin >> a >> str >> b;
	fix();
	turn1();
	turn2();
	return 0;
}