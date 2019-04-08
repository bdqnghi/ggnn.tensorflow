
int main()
{
	char yuan[1001],suo[1001];
	int n,i,j,a,ya[1001]={0};
	cin >> yuan ;
	n = strlen(yuan);
	for ( i = 0;i < n ; i ++ )
		if (yuan[i] >= 'a' && yuan[i] <= 'z')
			yuan[i] = yuan[i] + 'A' - 'a';
	suo[0] = yuan[0] ;
	j = 0;
	for ( i = 0 ;i < n ;i ++ )
	{
		if (yuan[i] == suo[j])
			ya[j] ++ ;
		else 
		{
			j ++;
			suo[j] = yuan[i];
			ya[j] = 1;
		}
	}
	for (i = 0; i <= j; i ++)
		cout << "(" << suo[i] << "," << ya[i] << ")";
	return 0;
}