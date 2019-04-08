
int main()
{
	char ca[251];
	char cb[251];
	char tempc;
	int ia[251] = {0};
	int ib[251] = {0};
	int result[251] = {0};
	int numa = 0;
	int numb = 0;
	int jinwei = 0;
	int weishu = 0;
	int resultweishu = 0;
	cin >> ca;
	cin >> cb;
	numa = strlen(ca);
	numb = strlen(cb);
	//cout << numa << " " << numb << endl;
	memset(ia,0,sizeof(int));
	memset(ib,0,sizeof(int));
	memset(result,0,sizeof(int));
	if(numa > numb)
		weishu = numa;
	else
		weishu = numb;
	for(int i = 0;i < numa;i ++)
	{
		tempc = ca[numa - i - 1];
		ia[i] = atoi(&tempc);
	}
	for(int i = 0;i < numb;i ++)
	{
		tempc = cb[numb - i - 1];
		ib[i] = atoi(&tempc);
	}
	for(int i = 0;i <= weishu;i ++)
	{
		result[i] = ia[i] + ib[i] + jinwei;
		if(result[i] > 9)
		{
			result[i] = result[i] - 10;
			jinwei = 1;
		}
		else
			jinwei = 0;
	}
	for(int i = 250;i >= 0;i --)
	{
		if(result[i] != 0)
		{
			resultweishu = i;
			break;
		}
	}
	for(int i = resultweishu;i >= 0; i --)
		cout << result[i];
	cout << endl;
}


/*#include<iostream>

int mycmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int main()
{
	int n = 0;
	cin >> n;
	int tianji[1000] = {0};
	int qiwang[1000] = {0};
	int isusedt[1000] = {0};
	int isusedq[1000] = {0};
	int tempt = 0;
	int tempq = 0;
	while(n != 0)
	{
		memset(tianji,0,sizeof(int));
		memset(qiwang,0,sizeof(int));
		memset(isusedt,0,sizeof(int));
		memset(isusedq,0,sizeof(int));
		tempt = 0;
		tempq = 0;
		for(int i = 0;i < n;i ++)
			cin >> tianji[i];
		for(int i = 0;i < n;i ++)
			cin >> qiwang[i];
		qsort(tianji,n,sizeof(int),mycmp);
		qsort(qiwang,n,sizeof(int),mycmp);
		for(int i = tempt;i < n;i ++)
		{
		}
		cin >> n;
	}
	return 0;
}*/