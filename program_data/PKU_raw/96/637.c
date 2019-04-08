/*
 * main.cpp
 *
 *  Created on: 2012-10-15
 *      Author: ??
 *  ??????
 */

int main()
{
	int  numerator [110],quotient[110];
	int i,j,t=0;
	char a[110];

	cin>>a;//???????????
	for (i=0;i<strlen(a);i++)
		numerator[i+1]=a[i]-48;//?????
	for (i=1;i<=strlen(a);i++)
	{
		quotient[i]=(t*10+numerator[i])/13;//?????
		t=(t*10+numerator[i])%13;//??
	}
	i=1;
	while ((quotient[i]==0) && (i<strlen(a))) i++;//?????0
	for (;i<=strlen(a);i++)
		cout<<quotient[i];
	cout<<endl<<t<<endl;
	return 0;
}