

int main()
{
	int a[1000]={0};
	a[0] = 2;
	int k;
	cin >> k;
	if(k==0)
		cout << "1";
	if(k==1)
		cout << "2";
	if(k>=2)
	{
	int i,j;
	for(i = 0; i < k -1 ;i++)
	{
		for(j =0;j<1000;j++)
		{
			a[j] = 2 * a[j]; 
		}
		for(j = 0;j<1000;j++)
		{
			if(a[j]>=10)
			{
				a[j+1] = a[j+1]+a[j]/10;
				a[j] = a[j]%10;
			}
		}
	}
	int flag = 0;
	for(i = 999; i>=0;i--)
	{
		if(a[i]==0&&flag==0)
			continue;
		if(a[i]!=0)
		{
			cout << a[i];
			flag = 1;
		}
		if(a[i] == 0 &&flag ==1 )
			cout << a[i];
	}
	}
	int wo;
	cin >> wo;
	return 0;
}