/*
 * 006.cpp
 *
 *  Created on: 2012-11-24
 *      Author: asus
 */
int common(int x, int y)//??common??
{
	if(x > y) return common(x / 2, y);//???????????2
	if(x < y) return common(x, y / 2);
	return x;//?????
}

int main()//???
{
	int m = 0, n = 0;
	cin >> m >> n;
	cout << common(m, n) << endl;//????
	return 0;
}