//***************************************************
//*    name: 4.cpp                                  *
//*    author:??                                  *
//*    date: 2013-11-01                             *
//*    description:????                         *
//***************************************************
int main()
{
	int a[6][6]={0},max=INT_MIN , min=INT_MAX,maxl,minh,i , j , k ,truth=0;
	for(i = 1;i < 6;i++)
	{
		for(j = 1 ; j < 6 ; j++)
			cin >> a[i][j] ;
	}
	for(i = 1 ; i < 6 ;i++)
	{
		for(j = 1 ; j < 6 ; j++)
		{
			if(max<a[i][j])
			{
				max = a[i][j];
				maxl =j ;
			}
		}
		for(k = 1 ; k < 6 ; k++)
		{
			if(min > a[k][maxl])
			{
				min= a[k][maxl];
				minh = k ;
			}
		}
		if(max == min)
		{
			truth = 1 ;
			cout << minh <<' '<< maxl <<' '<< a[minh][maxl] ;
		}
		max =INT_MIN  ;
		min =INT_MAX;
	}
	if(truth == 0)
		cout <<"not found"<<endl;
	return 0 ;
}