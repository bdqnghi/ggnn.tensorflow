
int main()
{   
	int a1[102],i,a3[102];
	memset(a1,0,sizeof(a1));
	memset(a3,0,sizeof(a3));
    a1[0]=1;
	int n;
	cin >> n;
    
	while(n-->0)
	{
		for(i=0;i<101;i++)
		{
			a3[i]+=a1[i]*2;
			if(a3[i]>=10)
			{
				a3[i+1]++;
				a3[i]=a3[i]%10;
			}
		}
		for(i=0;i<101;i++)
			a1[i]=a3[i];
        memset(a3,0,sizeof(a3));
	}

	i=101;
	while(a1[i]==0)
	{
		i--;
	}

	for(;i>=0;i--)
		cout << a1[i];
	cout << endl;
	return 0;
}

