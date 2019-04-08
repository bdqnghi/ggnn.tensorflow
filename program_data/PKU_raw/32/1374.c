int main()
{
	int  i, j, n, k, lena, lenb, pos; 
	               
	char a[101], b[101];
	cin >> n;
	for(k = 1; k <= n; k++)
	{
		cin.get();
		if(i >= 2)
			cout << endl;
		cin.getline(a, 101);		
		cin.getline(b, 101);
		lena = strlen(a);
		lenb = strlen(b);
		int numa[100]={0};
		int numb[100]={0};
		j = 0;
		for(i = lena - 1; i >= 0; i--)		
			numa[j++] = a[i] - '0';						
		j = 0;
		for(i = lenb - 1; i >= 0; i--)				
			numb[j++] = b[i] - '0';			
		for(i = 0; i < lena; i++)
		{
			numa[i] = numa[i] - numb[i];			
			if(numa[i] < 0)
			{
				numa[i] += 10;
				numa[i + 1]--;
			}
		}
		i = lena - 1;
		while(numa[i] != 0)
		{	
			pos = i;
			break;
		}
		for(i = pos; i >= 0; i--)
			cout << numa[i];
		cout << endl;
	}
	return 0;
}	