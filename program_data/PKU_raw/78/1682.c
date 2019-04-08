int main ()         //????
{
	int a,b,c,d;
	char name[5]={'z','q','s','l'};
	for ( a=10; a<=50; a++ )
		for ( b=10; b<=50; b++ )
		{
			if ( a==b ) continue;
			for ( c=10; c<=50; c++ )
			{
				if ( a==c||b==c ) continue;
				for ( d=10; d<=50; d++ )
				{
					if ( a==d||b==d||c==d )continue;
				if ( a+b==c+d && a+d>b+c && a+c<b &&
						a%10==0 &&b%10==0&&c%10==0 &&d%10==0 )
				{
					if ( a>b&&b>c&&c>d )
					{
						cout<<"z"<<' '<<a<<endl;
						cout<<"q"<<' '<<b<<endl;
						cout<<"s"<<' '<<c<<endl;
						cout<<"l"<<' '<<d<<endl;
					}
					else if ( a>b&&b>d&&d>c )
					{
						cout<<"z"<<' '<<a<<endl;
						cout<<"q"<<' '<<b<<endl;
						cout<<"s"<<' '<<d<<endl;
						cout<<"l"<<' '<<c<<endl;
					}
					else if ( a>c&&c>d&&d>b )
					{
						cout<<"z"<<' '<<a<<endl;
						cout<<"q"<<' '<<c<<endl;
						cout<<"s"<<' '<<d<<endl;
						cout<<"l"<<' '<<b<<endl;
				    }
					else if ( d>b&&b>a&&a>c )
					{
						cout<<"l"<<' '<<d<<endl;
						cout<<"q"<<' '<<b<<endl;
						cout<<"z"<<' '<<a<<endl;
						cout<<"s"<<' '<<c<<endl;
					 }

				}
				}
			}

		}

	return 0;            //???????????
}                         //????
