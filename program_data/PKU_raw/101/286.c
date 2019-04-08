int main()
{
	int A,B,C;
	int statement[4];
	char rank[4];
	for(A=1;A<=3;A++)
	{
		for(B=1;B<=3;B++)
		{
			if(A==B)continue;
			C=6-A-B;
			statement[A]=((B>A)+(C==A));
			statement[B]=((A>B)+(A>C));
			statement[C]=((C>B)+(B>A));
			rank[A]='A';
			rank[B]='B';
			rank[C]='C';
			if(statement[1]==2&&statement[2]==1&&statement[3]==0)
			{
					cout<<rank[1]<<rank[2]<<rank[3]<<endl;
			}
		}
	}
	return 0;
}