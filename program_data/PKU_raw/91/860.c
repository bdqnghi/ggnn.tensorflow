int main()
{
	char a[120];
	cin.getline(a,120);
	int j = strlen(a);
	char b[120];
	int k = 0;
	char *p = a;
	for(  ; p < a + j ; p++)
	{
		if( p == a + j - 1)
			b[k++]= (int) *p +  (int)a[0] ;
 		b[k++] = (int)*p + (int)*(p+1) ;
	}
	for( int i = 0 ; i < k-1 ; i++)
	{
		cout<<b[i];
	}
	cout<<endl;
		
	
	
	
	return 0;
}
