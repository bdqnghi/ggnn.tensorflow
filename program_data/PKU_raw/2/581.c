struct book
{
	int id;
	char writer[26];
	int length;
}zz[999];
int main()
{
	int n,i,j,k;
	int letter[26]={0};
	int letter_book[26][999]={0};
	cin>>n;
	for ( i = 0 ; i < n; i ++ )
	{
		cin>>zz[i].id;
		cin>>zz[i].writer;
		zz[i].length=strlen(zz[i].writer);
	}

	for ( j = 0 ; j < n ; j ++ )
	{
		for ( k = 0 ; k < zz[j].length ; k ++  )
		{
				
			letter_book[zz[j].writer[k] - 'A'][letter[zz[j].writer[k] - 'A']] = zz[j].id;
			letter[zz[j].writer[k] - 'A'] ++;
		}
	}
	int max=0,t;
	for ( i = 0 ; i < 26 ; i ++ )
	{
		if ( letter[i] > max )
		{	
			max = letter[i];
			t = i;
		}
	}
	char m;
	m = 'A' + t ;
	cout<<m<<endl;
	cout<<max<<endl;
	for ( i = 0 ; i < max ; i ++ )
		cout<<letter_book[t][i]<<endl;
}