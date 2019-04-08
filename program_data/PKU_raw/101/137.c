int main()
{
	int A,B,C;                                                   //??????
	char x[3];
	for (A=0;A<=2;A++)
	{
		for (B=0;B<=2;B++)
		{
			if (A==B)
				continue;
			for (C=0;C<=2;C++)
			{
				if (A==C||B==C)
					continue;                                    //?A,B,C??????
				x[A]=(B>A)+(A==C);
				x[B]=(A>B)+(A>C);
				x[C]=(C>B)+(B>A);                                //???????
				if (x[2-A]==A&&x[2-B]==B&&x[2-C]==C)
				{
					x[A]='A';
					x[B]='B';
					x[C]='C';                                    //??
					cout<<x[0]<<x[1]<<x[2]<<endl;      //??
				}
			}
		}
	}
	return 0;
}
