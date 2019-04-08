//******************************************
//*???????.cpp                     **
//*??: ??     1100012808              **
//*???2011.11.13                       **
//******************************************
void zch(char a[])
{
	int i = 0, j = 0, k = 0, flag = 0, l; 
	for (i = 2; i < strlen(a); i++)
	{
		for (j = 0; j <= strlen(a) - i; j++)
		{
			for (k = j; k < i / 2 + j; k++)
			{
				if (a[k] != a[i + j - 1 - (k - j)])
					break;
			}
			if (k == i / 2 + j)
			{
				for (l = j; l < i + j; l++)
					cout << a[l] ;
				cout << endl;
				cout << endl;
			}
		}
	}
	return;
}
int main()  //???
{        //?????
	char ch[100000];
	int i = 0;
	cin.getline(ch, 100000);
	zch(ch);
	return 0;
}

	

	