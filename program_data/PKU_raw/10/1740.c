

int dd[25];
int k;
int maxnum = 0;

void fun(int p, int num,int hight)
{
	if(p > k)
	{
		if(num > maxnum)
			maxnum = num;
		return;
	}
	if(dd[p] <= hight)
	{
		fun(p + 1,num + 1,dd[p]);
		fun(p + 1,num,hight);
	}
	else
		fun(p + 1,num,hight);
	return;
}

int main()
{
	cin >> k;
	for(int i = 0;i < k;i++)
		cin >> dd[i];
	fun(0,0,65535);
	cout << maxnum - 1<< endl;
}