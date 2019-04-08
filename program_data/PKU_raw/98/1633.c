//*******************************
//*????                    **
//*????? 1300012848       **
//*???2013.12.11            **
//*******************************
int mystrlen(char *p)
{
	int i = 0;
	while(*(p+i) != 0)
	{
		i++;
	}
	return i;
}
int main()
{
	char a[999][41];
	memset(a,0,sizeof(a));
	int n, i, j, cnt = 0, nlen;
	char *p, *q;
	cin >> n;
	for(i = 1; i <= n; i++)
		cin >> a[i];
	p = *a;//??a[0]
	cout << *(a+1);//?????
	nlen = mystrlen(*(a+1));
	cnt = nlen;
	for(j = 2; j <= n; j++)
	{
		nlen = mystrlen(*(a+j));
		if(cnt + nlen + 1 <= 80)//????????
		{
			cout << " " << *(a+j);
			cnt += nlen + 1;
		}
		else//????????
		{
			cnt = nlen;
			cout << endl;
			cout << *(a+j);
		}
	}
	return 0;
}