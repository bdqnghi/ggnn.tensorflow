//*********************************************************************
//*????food.cpp                                                   *
//*?  ??spica                                                      *
//*?????2011?11?                                               *
//*????:????????3?????                               *
//*********************************************************************
int main()
{
	int A=0,B=0,C=0;    //????????A,B,C
	int Aw=0,Bw=0,Cw=0; //???????Aw,Bw,Cw
	int As=0,Bs=0,Cs=0; // ??????As,Bs,Cs
	for(A=1;A<=3;A++)   //??A?1—3???????
	{
		for(B=1;B<=3;B++) //??B?1—3???????
		{
			for(C=1;C<=3;C++) //??C?1—3???????
			{
				Aw=(B>A)+(C==A); //A????
				Bw=(A>B)+(A>C);  //B????
				Cw=(C>B)+(B>A);  //C????
				if(!(A<=B&&Aw<=Bw||A<=C&&Aw<=Cw||B<=A&&Bw<=Aw||B<=C&&Bw<=Cw||C<=A&&Cw<=Aw))//??????????????????????????????????
				{
					As=A;
					Bs=B;
					Cs=C;
				}
			}
		}
	}
	if(As>=Bs&&Bs>=Cs)    //A>=B>=C
		cout<<"ABC"<<endl;
	if(As>=Cs&&Cs>=Bs)    //A>=C>=B
		cout<<"BCA"<<endl;
	if(Bs>=As&&As>=Cs)    //B>=A>=C
		cout<<"BAC"<<endl;
	if(Bs>=Cs&&Cs>=As)    //B>=C>=A
		cout<<"BCA"<<endl;
	if(Cs>=As&&As>=Bs)    //C>=A>=B
		cout<<"CAB"<<endl;
	if(Cs>=Bs&&Bs>=As)    //C>=B>=A
		cout<<"CBA"<<endl;
	return 0;
}
