int main()
{
	struct mingliu
	{
		int i ; 
		int j ;
	}people[10000];
	int n , k , a[10000] , p = 0;
	memset(a,0,sizeof(a));
	cin >> n;
	for(k = 0 ;;k++)
	{
		cin >> people[k].i >>people[k].j;
		if(people[k].i == 0 && people[k].j ==0) 
			break;
		a[people[k].i]++;
	}
	for(k = 0 ; k < n ; k++)
	{
		if(a[k] == 0)
		{
			cout << k <<endl;
			p++;
		}
		if(k == n - 1 && p == 0)
		{
			cout << "NOT FOUND"<<endl;
		}
	}
	return 0;
}