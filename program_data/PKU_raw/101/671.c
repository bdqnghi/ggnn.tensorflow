int main()
{
	int A,B,C;
	for(A=1;A<=3;A++)
	{
		for(B=1;B<=3;B++)
		{
			if(B==A)
				continue;
			for(C=1;C<=3;C++)
			{
				if(C==A||C==B)
					continue;
				int i,j,k;
				i=((B>A)+(C==A));
				j=((A>B)+(A>C));
				k=((C>B)+(B>A));
				if(A+i==3&&B+j==3&&C+k==3)
				{
					for(i=1;i<=3;i++)
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
		}
	}
	return 0;
}
