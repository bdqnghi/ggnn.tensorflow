int main()
{
	char a[600];
	int flag;
	cin >> a;
	int num = strlen(a);
	for(int i = 2; i <= num;i++) //????
	{
		for(int j = 0;j <= num-i+1;j++) //???
		{
			flag = 0;
			for(int k = 0; k < i/2;k++) //??????
			{
				if(a[j+k] != a[j+i-k-1])
				{
					flag = 1;
					break;
				}
			}
		    if(flag == 0)
			{
				for(int l = j; l<=j+i-1;l++)
					cout << a[l];
				cout << "\n";
			}
		}
	}
	return 0;
}
