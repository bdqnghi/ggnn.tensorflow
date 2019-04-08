/*???????
???10/31*/
int main()
{
	int a[20000],i,j,k,n,count = 0;
	cin >> n;											//??????????
	for(i = 0; i < n; i++)                               
	{
		cin >> a[i];                                     //??????
	}
	for(i = 1, k = 1; i < n; i++)
	{
		for(j = 0; j < i; j++)
		{
			if(a[j]==a[i])break;
		}
		if(j == i)
		{
			a[k] = a[i];
			k++;
            count++;                                    //????????
		}
			
	}
	cout << a[0];	
	for(k = 1; k <= count; k++)
		cout << " " << a[k];
	return 0;
}