//**************************************
//* ???????????? **
//* ?????? 1300012722 **
//* ???2013.10.10 **
//**************************************
int main()
{
	int n , i=1 ;                           //?????????n
	double a , b , c , x1 , x2 , delta , m;     //????ax2 + bx + c =0????????????x1?x2?b*b-4*a*c??,-b/(2*a)d??m
	cin >> n ;                              //??n??

	while (i<=n)
	{ 
		cin >> a >> b >> c ;                //???????
		delta= b * b - 4 * a * c;           //??delta??
			if(delta > 0)

			{
				x1 = ( 0 - b + sqrt(delta) ) / (2 * a) ;       //??x1??
                x2 = ( 0 - b - sqrt(delta) ) / (2 * a) ;       //??x2?? 
                cout << fixed ;
	            cout << setprecision(5) <<  "x1=" << x1 << ";" << "x2=" << x2 << endl ;        //??x1,x2??????????5?
			}
			else if(delta==0)                                                       
			{
				m = (0 - b) / ( 2 * a ) ;                                                            //??x1?x2??
				cout << fixed ;
	            cout << setprecision(5) <<  "x1=x2=" << m << endl ;                           //??x1,x2??????????5?
			}

		    else if(delta<0)                                                                    
			{
				m= (0 - b) / ( 2 * a ) ;
				cout << fixed ;
                cout << setprecision(5) << "x1=" << m << "+" << sqrt(-delta) / (2*a) << "i" << ";" ;  //??x1??
				cout << setprecision(5) << "x2=" << m << "-" << sqrt(-delta) / (2*a) << "i" << endl;  //??x2??
			}

		i++;          //i???1
	}	

	return 0;
}
