int main()
{
	int n, i, a, b, c, d, B, C;
	cin>>n;
	for ( i = 1; i <= n; i++ )
	{
		cin>>a>>b>>c;
		if ( ( a % 400 == 0 ) || ( a % 4 == 0 )
			 && ( a % 100 != 0 ) )
		{
			if ( b > c )
			{
				d = c; c = b; b = d;
			}
			switch ( b )
			{ case 1: B = 0;break;
			{ case 2: B = 31;break; }
			{ case 3: B = 60;break; }
			{ case 4: B = 91;break; }
			{ case 5: B = 121;break; }
			{ case 6: B = 152;break; }
			{ case 7: B = 182;break; }
			{ case 8: B = 213;break; }
			{ case 9: B = 244;break; }
			{ case 10: B = 274;break; }
			{ case 11: B = 305;break; }
			{ default: B = 335;break; }
			}
			switch ( c )
			{ case 1: C = 0;break; 
			{ case 2: C = 31;break; }
			{ case 3: C = 60;break; }
			{ case 4: C = 91;break; }
			{ case 5: C = 121;break; }
			{ case 6: C = 152;break; }
			{ case 7: C = 182;break; }
			{ case 8: C = 213;break; }
			{ case 9: C = 244;break; }
			{ case 10: C = 274;break; }
			{ case 11: C = 305;break; }
			{ default: C = 335;break; }
			}
			if ( ( C - B ) % 7 == 0 )
				cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else
		{
			if ( b > c )
			{
				d = c; c = b; b = d;
			}
			switch ( b )
			{ case 1: B = 0;break; 
			{ case 2: B = 31;break; }
			{ case 3: B = 59;break; }
			{ case 4: B = 90;break; }
			{ case 5: B = 120;break; }
			{ case 6: B = 151;break; }
			{ case 7: B = 181;break; }
			{ case 8: B = 212;break; }
			{ case 9: B = 243;break; }
			{ case 10: B = 273;break; }
			{ case 11: B = 304;break; }
			{ default: B = 334;break; }
			}
			switch ( c )
			{ case 1: C = 0;break;
			{ case 2: C = 31;break; }
			{ case 3: C = 59;break; }
			{ case 4: C = 90;break; }
			{ case 5: C = 120;break; }
			{ case 6: C = 151;break; }
			{ case 7: C = 181;break; }
			{ case 8: C = 212;break; }
			{ case 9: C = 243;break; }
			{ case 10: C = 273;break; }
			{ case 11: C = 304;break; }
			{ default: C = 334;break; }
			}
			if ( ( C - B) % 7 == 0 )
				cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
	return 0;
}