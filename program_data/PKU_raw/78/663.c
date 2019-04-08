//============================================================================
// Name        : national8.cpp
// Author      : 1300012911
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


int main() {
	int weight[6];  //??
	char name[6];   //??????
	int z,q,s,l,i,renshu;  //z,q,s,l:??????
	for (i = 1;i <= 5;i++) {weight[i] = i*10;name[i] = ' ';}  //???
	for (z = 1;z <= 5;z++)  //??
		for (q = 1;q <= 5;q++)
			for (s = 1;s <= 5;s++)
				for (l = 1;l<=5;l++)
				{
					if ((z != q) && (z != s) && (q != s)
						&& (z != l) && (q != l) && (s != l))  //????
					{
						if ( ((weight[z]+weight[q]) == (weight[s]+weight[l]))
								&& ((weight[z]+weight[l]) > (weight[s]+weight[q]))
								&& ( (weight[z]+weight[s]) < weight[q]) )
							//???????
						{
							name[z] = 'z';  //??????
							name[q] = 'q';
							name[s] = 's';
							name[l] = 'l';
							renshu = 0; //??????
							for (i = 5;i >= 1;i--) //??
								{
								  if ( name[i] != ' ' )
									  {
									     renshu++;
									     if (renshu < 4)
									    cout << name[i] << ' ' << weight[i] << endl;
									     else cout << name[i] << ' ' << weight[i];
									  }else;
								}
						}else;
					}else;
				}
	return 0;
}
