int main()
{
	//char str[101], end[101];
	int n,i,j,k;
	int a[101] = {0};
	a[1] = 1;
	
	cin>>n;
	
	for (k=1;k<=n;k++)
	{
		for (i=1;i<=100;i++)
		{
			
		
			
			a[i] = a[i] * 2;
		
			
			
		}
		for(i=1;i<=100;i++)
		{
				if(a[i] >=10)
			{
				a[i+1] = a[i+1] + a[i] /10;
				a[i] = a[i] %10;
				
			}
		}

	}
	
    i=100;
	while(a[i] ==0)
		i--;
	for (j = i;j >=1;j--)
		cout <<a[j];
	return 0;
}

