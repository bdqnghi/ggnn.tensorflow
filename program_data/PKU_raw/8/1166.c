
void getnum( int a[], int b[] ); //get the two arrays
void sort( int a[], int len ); // sort the array 
void combine ( int a[], int b[], int len1, int len2 ); //combine two arrays
int len1, len2;

int main()
{
		int a[1000] = {0}, b[1000] = {0};
		
		getnum( a, b );
		sort(a,len1);
		sort(b,len2);
		combine( a, b, len1, len2 );
		
		return 0;
}

void getnum( int a[], int b[] )
{
		cin >> len1 >> len2;
		
		for ( int i = 0; i < len1; i++ )
			cin >> a[i];
		for ( int j = 0; j < len2; j++ )
			cin >> b[j];
		
		return;
}

void sort( int a[], int len )
{
		int temp = 0;
		
		for ( int i = 0; i < len - 1; i++ )
		{
				for ( int j = 0; j < len - i - 1; j++ )
				{
						if ( a[j] > a[j+1] )
						{
								temp = a[j];
								a[j] = a[j+1];
								a[j+1] = temp; //put the biggest to the end
						}
				}
		}
		return;
}

void combine ( int a[], int b[], int len1, int len2 )
{
		int pin = 0;
		
		for ( int i = len1; i < len1 + len2; i++ )
		{
				a[i] = b[i-len1];
		}
		
		for ( int j = 0; j < len1 + len2; j++ )
		{
				if ( pin == 0 )
				{
					cout << a[j];
					pin = 1;
				}
				else
					cout << " " << a[j];
		}
		return;	
}
