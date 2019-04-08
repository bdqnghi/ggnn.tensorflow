


int main()
{
	int n,book[1000],i,j,countt[26]={0},len,max=-1, maxauthor;
	char peo[1000][27],sum[100000]="\0",ch;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin >> book[i] >> peo[i];
		strcat(sum,peo[i]);
	}
	len=strlen(sum);
	for(i=0;i<len;i++)
		countt[sum[i]-65]++;
	for(i=0;i<26;i++)
		if(countt[i]>max)
		{
			max=countt[i];
			maxauthor = i;
		}

	ch=maxauthor+65;
	int p=0,t=0;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<strlen(peo[i]);j++)
			if(peo[i][j]==ch)
				p++;
		if(p>0)
			book[i-t]=book[i];
		else
			t++;
		p=0;
	}
	cout << ch << endl;
	cout << n-t << endl;
	for(i=1;i<=n-t;i++)
		cout << book[i] << endl;
	return 0;
}
