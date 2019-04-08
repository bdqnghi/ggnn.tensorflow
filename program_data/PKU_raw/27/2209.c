int main()
{
	int n;                                     //????n????????
  
	double a, b, c, x1, x2, shi, xu;           //?????a,b,c???,x1,x2?????,shi,xu?????

	cin >> n;                                  //????????

	for ( int p = 1; p <= n; p++ )             //????

	{
		cin >> a >> b >> c;

		if ( b * b - 4 * a * c < 0 )           //????????????0?

		{
			shi = -b / (2 * a);

			xu = sqrt(4 * a * c - b * b) / ( 2 * a );        //???

			if (shi == 0)

			{
				shi = -shi;
			}

		   	printf ("x1=""%.5f",shi);
				
		   	printf ("+""%.5f",xu);
	
		  	printf ("i;x2=""%.5f",shi);
			
		   	printf ("-""%.5f",xu);

		   	printf ("i");

		   	printf ("\n");

		}

		else if ( b * b - 4 * a * c == 0 )      //????????????0?

		{
			x1 = ( -b + sqrt(b * b - 4 * a * c)) / (2 * a);    //???

			printf ( "x1=x2=""%.5f",x1);

			printf ("\n");
		}

		else                                    //????????????0?

		{
			x1 = ( -b + sqrt(b * b - 4 * a * c)) / (2 * a);

			x2 = ( -b - sqrt(b * b - 4 * a * c)) / (2 * a);    //???

			printf ("x1=""%.5f",x1);

			printf (";x2=""%.5f",x2);

			printf ("\n");
		}
	}
	return 0;
}


