/*
 * 7.cpp
 * ????
 *  Created on: 2012-11-5
 *      Author: Salforever
 */



int main()
{
	int length,num,i,len=0;							//????
	char x[105],y[101][105];
	cin.getline(x,101);								//?????
	length=strlen(x);								//???????
	num=1;											//???????
	for (i=0;i<=length-1;i++)						//????
		if (x[i]!=' ') {y[num][len]=x[i];len++;}
		else {y[num][len]='\0';num++;len=0;}
	for (i=num;i>=2;i--)							//????
		cout << y[i] << ' ';
	cout << y[1] << endl;
	return 0;
}
