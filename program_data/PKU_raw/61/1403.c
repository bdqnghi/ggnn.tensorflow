/*
 * ??????.cpp
 *
 *  Created on: 2012-10-16
 *      Author: ???
 */
int main()
{
	int a,b,c,n,i,j=3;

	cin >> n;
	for(i = 1;i <= n;i++)//???????????
	{
		cin >> c;
		if((c ==1)&&(c == 2))
			cout << 1;
		a = 1;
			b = 1;
		for(j = 3;j <= c;j = j +2 )//??????????
		{
			a = a+b;
			b = b+a;

		}
		if(c%2==1)//????a??b?
		cout << a<<endl;
		if(c%2==0)
			cout << b << endl;

	}
	return 0;
}

