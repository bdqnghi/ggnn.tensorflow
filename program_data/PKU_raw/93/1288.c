//********************
//*?5?            **
//*???????   **
//*2013?9?25?    **
//********************
int main ()
{
	int num, a, b, c;                             //????num?a?b?c????3,5,7???

	cin >> num;                                   //??num

	a = num % 3;                                  //????a

	b = num % 5;                                  //????b

	c = num % 7;                                  //????c

	if ( a && b && c )                            //??a b c???????n

		cout << "n" << endl;

	else 

		if ( a == 0 )

			if ( b == 0 )

				if ( c == 0 )

					cout << "3 5 7" << endl;      //??a=b=c=0??3 5 7?

				else 

					cout << "3 5" << endl;        //??a=b=0?c??????3 5

			else

				if ( c == 0 )                     //??c=0 ??3 7

					cout << "3 7" << endl;

				else                              //??b c???????3

					cout << "3" << endl;

		else  

			if ( b == 0 )           

				if ( c == 0 )
					 
					cout << "5 7" << endl;        //??a????b=c=0???5 7 

				else 

					cout << "5" << endl;          //??a?c????b?????5

			else

				if ( c == 0 )                     //??a?b???c??????7

					cout << "7" << endl;
	
	return 0;                                     //??????????????  
}