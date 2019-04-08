/*
 * lee2.cpp
 *
 *  Created on: 2011-6-8
 *      Author: 09143
 */
int kMis;
int Mis[30];
int Array[30];
void Lanjie(int iM)
{
	for(int i = iM; i < kMis; i ++)
	{
		if(Mis[iM - 1] >= Mis[i] && Array[iM - 1] <= Array[i])
			Array[iM - 1] = Array[i] + 1;
	}
	if(iM > 1) Lanjie(iM - 1);
	return;
}
int main()
{

	cin >> kMis;
	for(int i = 0; i < kMis; i ++)
		cin >> Mis[i];
	for(int i = 0; i < kMis; i ++)
	{
		Array[i] = 1;
	}
	Lanjie(kMis);
	int MaxLen = -1;
	for(int i = 0; i < kMis; i ++)
		if(MaxLen < Array[i]) MaxLen = Array[i];
	cout << MaxLen << endl;

}
