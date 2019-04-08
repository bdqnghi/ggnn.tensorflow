/*
 * test4_1.cpp
 *?? - ????
 *  Created on: 2010-12-31
 *      Author: 10035
 */

int main()
{
	char c[50];  //????
	int n,i;
	cin.getline(c,50);
	n=strlen(c);
	i=0;
	while (i<n)
	{
		if ((c[i]<'0')||(c[i]>'9')) {i++; continue;}         //????,????
		while ((c[i]>='0')&&(c[i]<='9')&&(i<n)) {cout<<c[i]; i++;}  //???,??
		cout<<endl;
	}
	return 0;
}
