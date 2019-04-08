int main()
{
	int A,B,C;
	char rank[3];
	int i;
	for(A=0;A<3;A++)
	{
		for(B=0;B<3;B++)
		{
			if(B!=A)
			{
				C=3-A-B;
				if((A+((B>A)+(C==A))==2)&&(B+((A>B)+(A>C))==2)&&(C+((C>B)+(B>A))==2))
				{
					rank[A]='A';
					rank[B]='B';
					rank[C]='C';
				}
			}
		}
	}
	for(i=0;i<3;i++)
		cout<<rank[i];
   	return 0;
}