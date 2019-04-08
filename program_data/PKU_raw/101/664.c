int main()
{
	int a, b, c, A, B, C, t;
	for (a = 1; a <= 3; a++)
		for (b = 1; b <= 3; b++)
			for (c = 1; c <= 3; c++)
			{
				A = (b > a)+(c == a);
				B = (b < a)+(c < a);
				C = (c > b)+(b > a);
				if (a+A == b+B && b+B ==c+C)
				{
					if(a<b && a<c) 
					{cout << 'A' ;
					if(b<c) cout<<'B'<<'C';
					else cout<<'C'<<'B';}

					if(b<a && b<c) 
					{cout << 'B' ;
					if(a<c) cout<<'A'<<'C';
					else cout<<'C'<<'A';}
					if(c<a && c<b) 
					{cout << 'C';
					if(a<b) cout<<'A'<<'B';
					else cout<<'B'<<'A';}
				}

			}
	return 0;

}