/*
 * ???.cpp
 *
 *  Created on: 2012-10-16
 *      Author: ???
 */
int main ()
{
	int z,q,s,l;
	for(z = 1; z <= 5;z++)
		for(q = 1;q <= 5;q++)
			for(s = 1;s <= 5;s++)
				for(l = 1;l <= 5;l++)
				{
					if((z+q)==(s+l)&&(z+l)>(s+q)&&(z+s)<q)//????
					{
						if(l > q)
						{
							cout << "l" <<" " << 10*l <<endl;
							cout << "q" <<" " <<10*q <<endl;//???????
						}
						if(z>s)
						{
							cout << "z" <<" " << 10*z <<endl;
							cout << "s" <<" " << 10*s <<endl;
						}
						else
						{
							cout << "s" <<" " << 10*s <<endl;
							cout << "z" <<" " << 10*z <<endl;//?????????
						}
					}
				}

	return 0;
}

