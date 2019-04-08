
int main ()
{
	int n , sum = 0 , i = 0,flag = 0 , k = 0, j = 0;
	float a[301] = {0}, dis[301] = {0}, max = 0 , pai[301]={0} ,temp = 0 ,ave = 0 ;
	cin >> n;
	for ( i = 0; i < n; i++)
	{
		cin >> a[i];
		sum = sum + a[i];
	}
	ave =(float) sum / n;
	for( i = 0; i < n ;i++)
	{
	    dis[i] = fabs(a[i] - ave);
		if( dis[i] > max)
			max = dis[i];
	}
	for( i = 0; i < n; i++)
	{
		if( fabs(dis[i] - max)< 1e-5)
		{
			pai[k++] = a[i];
		}
	}
	for( i = 0; i < k -1 ; i++)
	{
		for( j = 0; j < k - i - 1; j++)
		{
			if( pai[j] > pai[j+1])
			{
				temp = pai[j];
				pai[j] = pai[ j+1];
				pai[j+1] = temp;
			}
		}
	}
	for( i = 0 ; i < k; i ++)
	{
			if( flag == 0)
			{
			cout << pai[i];
			flag = 1;
			}
			else
				cout << "," << pai[i];
	}
	return 0;
}



