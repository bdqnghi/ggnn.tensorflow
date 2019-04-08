int main()
{
	int A,B,C,a,b,c;
	for(int A=0;A<=2;A++)
		for(B=0;B<=2;B++)
		{
			if(B==A)
				continue;
			for(C=0;C<=2;C++)
			{
				if(C==B||C==A)
					continue;
				a=(B>A)+(C==A);
				b=(A>B)+(A>C);
				c=(C>B)+(B>A);
				if(a==2-A&&b==2-B&&c==2-C)
					for(int i=0;i<=2;i++)
					{
						if(A==i)
							cout<<"A";
						if(B==i)
							cout<<"B";
						if(C==i)
							cout<<"C";
					}
			}
			
		}
	return 0;
}