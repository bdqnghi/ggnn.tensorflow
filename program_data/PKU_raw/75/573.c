//***********************************************************
//*    name: 5.cpp                                          *
//*    author:??                                          *
//*    date: 2013-10-30                                     *
//*    description? ?????                             *
//***********************************************************
int main ()
{
	int a[1000] ={0}, i = 0, d, sum = 0 ,j,max=1;
	while (cin>>d)
	{
		a[i]=d;
		i++;
		sum++ ;
		if(cin.get() == '\n') break ;
	}
	int b[1000]={0} ;
	i=0 ;
	while ( cin>>d)
	{
		b[i]= d ;
		i++ ;
		if(cin.get() == '\n')break ;
	}
	int c[1000]={0};
	for(i = 0 ; i < sum ; i++)
	{
		for (j=a[i];j < b[i] ;j++)
		{
			c[j]++ ;
		}
	}
	for (j=0;j<1000; j++)
	{		
		if(max < c[j]) max =c[j];
	}
	cout << sum << ' '<< max << endl;
	return 0;
}