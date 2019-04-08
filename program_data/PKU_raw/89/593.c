int main()
{
	int i, j, k, n, flag, count, s = 0, a[100000] = {0}, b[100000] = {0};
	cin>>n;
	cin>>a[0]>>b[0];
	for(i = 0; a[i] != 0 || b[i] != 0; i++)
		cin>>a[i + 1]>>b[i + 1];
	for(j = 0; j < i; j++)
	{
		count = 1;
		for(k = j + 1; k < i; k++)
		{
			if(b[k] == -1)
				continue;
			if(b[k] == b[j])
			{
				b[k] = -1;
				count++;
			}
		}
		if(count == n - 1)
		{
			flag = 1;
			for(k = 0; k < i; k++)
			{
				if(a[k] == b[j])
				{
					flag = 0;
					break;
				}
			}
			if(flag)
			{
				s++;
			    cout<<b[j]<<endl;
			}
		}
	}
	if(s == 0)
		cout<<"NOT FOUND"<<endl;
	return 0;
}

