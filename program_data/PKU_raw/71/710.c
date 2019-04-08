int main()
{
	int n,a[200][3],b[12] = {31,28,31,30,31,30,31,31,30,31,30,31}, c[12] = {31,29,31,30,31,30,31,31,30,31,30,31}; 
	int i,j,y,p,q;
	int e,sum=0;
	cin>>n;
	for ( j = 0 ; j < n ; j ++ )
		for ( i = 0 ; i < 3 ; i ++ )
			cin>>a[j][i];
	for ( j = 0 ; j < n ; j ++ )
		{
			sum = 0;
			  if ( a[j][0] % 4 != 0 || ( a[j][0] % 100 == 0 && a[j][0] % 400 != 0 ))
			{
				p = a[j][1];
				q = a[j][2];
				if ( p < q )
					{
						for ( e = p - 1;e < q-1;e++ )
							sum += b[e];
				    }
				else 
					{
						for ( e = q - 1;e < p-1;e++ )
							sum += b[e];
				    }
				if ( sum % 7 == 0)
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}
			 else
			 {
				p = a[j][1];
				q = a[j][2];
				if ( p < q )
					{
						for ( e = p - 1;e < q-1;e++ )
							sum += c[e];
				    }
				else 
					{
						for ( e = q - 1;e < p-1;e++ )
							sum += c[e];
				    }
				if ( sum % 7 == 0)
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}
		}
}