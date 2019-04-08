int main()  							//???
{
	int side_sum(int *p);				//????
	int k;
	int *p;								//????*p???k??????
	cin >> k;
	p = &k;
	side_sum(p);						//????
	return 0;
}
int side_sum(int *p)					//??????????
{
	int  k , m , n , i , j , l , sum=0;
	int a[100][100];
	k = *p;
	for(i=0; i<k; i++)
	{
		sum=0;							//?sum???0
		cin >> m >> n;					//???????m???n 
		for(j=0; j<m; j++)				
			for(l=0; l<n; l++)
			{
				cin >>  a[j][l];
				if(j == 0  ||  j == m-1)
					sum +=a[j][l];
				else 
					if(l == 0  ||  l == n-1)
						sum +=a[j][l];
			}
			cout << sum << endl;		//????????????
	}
	return 0;
}





