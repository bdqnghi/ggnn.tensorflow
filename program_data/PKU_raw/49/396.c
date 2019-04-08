
void string1(char* a, int* x1, int* x2, int len);
void string2(char* a, int* x1, int* x2, int len);
void out(int q,int len, char* a);

int main()
{
	char a[501];
	int x1[501] = {0};
	int x2[501] = {0};
	cin >> a;
	int j = 0;
	for (int i = 1; a[i] != '\0'; i++)
	{
		if (a[i - 1] == a[i])
		{
			cout << a[i - 1] << a[i] << endl;
			x1[j] = i;
			j++;
		}
	}
	j = 0;
	for (int i = 1; a[i + 1] != '\0'; i++)
	{
		if (a[i - 1] == a[i + 1] && a[i] != a[i - 1])
		{
			cout << a[i - 1] << a[i] << a[i + 1] << endl;
			x2[j] = i;
			j++;
		}
	}
	//??????2?3???,??????
	string1(a, x1, x2, 3);//??????????
}

void string2(char* a, int* x1, int* x2, int len)//len(??)??????
{
	int temp1 = 0,temp2 = 0;
	for (int i = 0; x1[i] != 0; i++)
	{
		if(a[x1[i] + len / 2 - 1] == a[x1[i] - len / 2] &&  x1[i] + len / 2 - 1 != 0 &&  x1[i] + len / 2 - 1 < 501 && x1[i] - len / 2 >= 0)//?????
		{
			out(x1[i] - len / 2,len,a);
			x1[temp2] = x1[i];
			temp2++;
		}
	}
	x1[temp2] = 0;
	if(x1[0] == 0 && x2[0] == 0)
		exit(0);//?????????????????
	string1(a, x1, x2, ++len);
}

void string1(char* a, int* x1, int* x2, int len)//len(??)??????,?string1????
{
	int temp1 = 0,temp2 = 0;
	for (int i = 0; x2[i] != 0; i++)
	{
		if(a[x2[i] + len / 2] == a[x2[i] - len / 2] &&  x2[i] + len / 2 != 0 &&  x2[i] + len / 2 < 501 && x2[i] - len / 2 >= 0)//?????
		{
			out(x1[i] - len / 2,len,a);
			x2[temp2] = x2[i];//??x2???????
			temp2++;
		}
	}
	x2[temp2] = 0;
	if(x1[0] == 0 && x2[0] == 0)
		exit(0);//?????????????????
	string2(a, x1, x2, ++len);
}



void out(int q,int len, char* a)//???????
{
	for (int i = 0; i < len; i++)
		cout << a[q + i];
	cout << endl;
}
