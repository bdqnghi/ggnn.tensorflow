//**************************
//*???2013?12?11?    *
//*??????            *
//*???n-gram????    *
//**************************

int main ()
{
	int n, i, j, cnt = 1, maxx = 0;
	char a[501], b[501][5] = {'\0'}, d[501][5] = {'\0'}, c[1][5], max[501][5] = {'\0'};
	cin >> n >> a;
	int len = strlen(a);
	
	for(i = 0; i <= len - n; i++)
	{
		for(j = i; j <= n + i - 1; j++)
		{
			*(*(d+i)+j-i) = *(a+j);
			*(*(b+i)+j-i) = *(a+j);
		}
	}

	for(i = 0; i < len - n; i++)
	{
		for(j = 0; j < len - n; j++)
		{
			if(strcmp(b[j], b[j+1]) > 0)
			{
				strcpy(c[0], b[j]);
				strcpy(b[j], b[j+1]);
				strcpy(b[j+1], c[0]);
			}
		}
	}

	for(i = 0; i <= len - n; i++)
	{
		if(strcmp(b[i], b[i+1]) == 0)
		{
			cnt++;
		}
		else if(cnt >= maxx)
		{
			maxx = cnt;
			cnt = 1;
		}
		else
			cnt = 1;
	}
	if(maxx != 1)
		cout << maxx << endl;
	else
	{
		cout << "NO" << endl;
		return 0;
	}

	cnt = 1;
	for(i = 0; i <= len - n; i++)
	{
		if(strcmp(b[i], b[i+1]) == 0)
			cnt++;
		else if(cnt == maxx)
		{
			cnt = 1;
			strcpy(max[i], b[i]);
		}
		else
			cnt = 1;
	}

	for(i = 0; i <= len - n; i++)
	{
		for(j = 0; j <= len - n; j++)
		{
			if(strcmp(d[i], max[j]) == 0)
			{
				max[j][0] = '\0';
				cout << *(d+i) << endl;
				continue;
			}
		}
	}
	return 0;
}