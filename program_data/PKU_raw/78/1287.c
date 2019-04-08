// ??3.cpp : Defines the entry point for the console application.
//


int main()
{
	int z = 0;
	int q = 0;
	int s = 0;
	int l = 0;
	int i = 0;
	char temp[51];

	memset(temp,'0',sizeof(temp));

	for(z = 10;z <= 50;z +=10 )
		for(q = 10;q <= 50;q +=10 )
			for(s = 10;s <= 50;s +=10 )
				for(l = 10;l <= 50;l +=10 )
				{
					if( (z + q) == (s + l)
						&& (z + l) > (s + q)
						&& (z + s) < q )
					{
						temp[z] = 'z';
						temp[s] = 's';
						temp[q] = 'q';
						temp[l] = 'l';

					for( i = 50;i >= 10; i--)
					{
						if( temp[i] != '0' )
						{
							cout << temp[i] << " " << i << endl;
						}
					}
					}
				}



	return 0;

}
