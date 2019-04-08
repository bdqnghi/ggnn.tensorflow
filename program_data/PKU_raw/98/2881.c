int main()
{
	int n,i,k,x=0,flag=0,count=0;
	int a[500]={0};
	char word[500][50];
	cin >> n;
	for (i=0;i<n;i++)
	{
		cin >> word[i];
		a[i]=strlen(word[i])+1;
	}
	i=0;
	while (1)
	{
		while (count<=81)
		{
			count+=a[i];
			i++;
			if (i==n)
			{
				flag=1;
				break;
			}
		}		
		if (flag==1)
		{
			cout << word[x];
			for (k=x+1;k<n;k++)
			{
				cout << " " << word[k];
			}
			break;
		}
		i--;
		count=0;
		cout << word[x];
		for (k=x+1;k<i;k++)
		{
			cout << " " << word[k];
		}
		cout << endl;
		x=i;
	}
	return 0;
}