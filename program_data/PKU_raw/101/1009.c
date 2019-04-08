int main()
{
	int A,B,C;
	int c1,c2,c3;
	for(A=1;A<=3;A=A+1)
		for(B=1;B<=3;B=B+1)
			for(C=1;C<=3;C=C+1)
			{
				c1=(B>A)+(C+A);
				c2=(A>B)+(A>C);
				c3=(C>B)+(B>A);
				if(A+c1==B+c2==C+c3==3)
					break;
			}
	if(A>B)
	{
		if(B>C) cout <<"ABC" <<endl;
		else if(C>A) cout <<"CAB" <<endl;
		else cout <<"ACB" <<endl;
	}
	else
	{
		if(A>C) cout <<"BAC" <<endl;
		else if(C>B) cout <<"CBA" <<endl;
		else cout <<"BCA" <<endl;
	}
	return 0;
}
