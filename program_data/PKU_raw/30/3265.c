/*
 * ?The number has no relative to seven?.cpp
 *
 *  Created on: 2010-11-4
 *      Author: acer
 */

int main()
{
	int Num,i,Sum=0;
	cin>>Num;
	int exam(int Num);					//??????

	for(i=0;i<=Num;i++)					//????
		if(exam(i))
			Sum+=i*i;					//????
	cout<<Sum;
	return 0;
}

int exam(int Num)						//????
{
	if(((Num%10)==7)||(((Num-Num%10)/10)==7)||(Num%7==0))
		return 0;						//??7???7?????0  ????1
	else return 1;
}
