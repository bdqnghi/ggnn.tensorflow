int main()
{
	int a, b, c;
	int a1, b1, c1;
	for(a = 1; a <= 3; a++)
	{
		for(b = 1; b <= 3; b++)
		{
			for(c = 1; c <= 3; c++)
			{
				a1 = ( b < a ) + ( c == a );
				b1 = ( a < b ) + ( a < c );
				c1 = ( c < b ) + ( b < a );
				//cout << a1 << " " << b1 << " " << c1 << "  " <<endl;
				if(a1<b1 && a1<c1 && b1<c1 && a<b && a<c && b<c) 
					cout << "CBA" << endl;
				else if(a1<b1 && a1<c1 && c1<b1 && a<b && a<c && c<b)  
					cout << "BCA" << endl;
				else if(b1<a1 && b1<c1 && a1<c1 && b<a && b<c && a<c)
					cout << "CAB" << endl;
				else if(b1<a1 && b1<c1 && c1<a1 && b<a && b<c && c<a) 
					cout << "ACB" << endl;
				else if(c1<a1 && c1<b1 && a1<b1 && c<a && c<b && a<b)
					cout << "BAC" << endl;
				else if(c1<a1 && c1<b1 && b1<a1 && c<a && c<b && b<a)
					cout << "ABC" << endl;
		

				
			}
		}
	}
	return 0;
}