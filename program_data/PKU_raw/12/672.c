int main()
{
	int a[15];
	int i = 0 ;
	while(cin >> a[i])
	{
		int i = 0,j = 0;
		if(a[i] == -1)return 0;
		do
		{
			i++;
			j++;
			cin >> a[i];
		}   while(a[i]);
	
		
			int y, z, k = 0;
			 for(z=0; z <= j - 1; z++)
				for(y = z + 1; y <= j - 1; y++)
					if(a[z] == 2 * a[y] || a[y] == 2 * a[z]) 
					{
						k++;
					}
			cout << k <<endl;
		

	}	
    
	return 0;
}
