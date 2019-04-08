int main()
{
	char x[3]="";                                  //???????
	int A,B,C;                                     //??????
	for (A=0;A<3;A++)
	{
		for (B=0;B<3;B++)
		{
			if (A==B)
				continue;
			C=3-A-B;                               //??????
			x[A]=(B>A)+(C==A);
			x[B]=(A>B)+(A>C);
			x[C]=(C>B)+(B>A);                      //??
			if (x[A]==2-A&&x[B]==2-B&&x[C]==2-C)
			{
				x[A]='A';
				x[B]='B';
				x[C]='C';                          //???????
				cout<<x[0]<<x[1]<<x[2]<<endl;      //??????
			}		
		}
	}
	return 0;
}