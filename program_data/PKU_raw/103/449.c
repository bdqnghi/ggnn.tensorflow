int main()
{
	int i, j, len, count;
	char a[1001]={0};
	cin.getline(a, 1001);
	len=strlen(a);
	for(i=0; i<len; i++)
	{
		if(a[i]-'Z'>=0)
			a[i]=a[i]-32;
	}
	for(i=0; i<len; i++)
	{
		count=0;
		if(i!=0)
		{
			if(a[i]!=a[i-1])
			{
				for(j=i; j<len; j++)
				{
					if(a[i]==a[j])
						count++;
					else
						break;
				}
				cout << "(" << a[i] << "," << count << ")";
			}
		}
		if(i==0)
		{
			for(j=i; j<len; j++)
				{
					if(a[i]==a[j])
						count++;
					else
						break;
				}
				cout << "(" << a[i] << "," << count << ")";
		}
	}
	return 0;
}
