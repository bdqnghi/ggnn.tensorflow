int main()
{
	int A,B,C,i=0;
	int state[3];
	char name[3];
	for(A=0;A<3;A++)
	{
		for(B=0;B<3;B++)
		{
			if(A==B) continue;
			C=3-A-B;
			state[A]=(B>A)+(C==A);
			state[B]=(A>B)+(A>C);
			state[C]=(C>B)+(B>A);
			if(state[A]+A==2&&state[B]+B==2&&state[C]+C==2)
			{
				name[A]='A';
				name[B]='B';
				name[C]='C';
				for(i=0;i<3;i++)
					cout<<name[i];
			}
		}
	}
	cout<<endl;
	return 0;
}