int main()                //???
{
	int A,B,C,i=0,n[4];
	char m[4];                   //????
	for(A=1;A<4;A++)
	{
		for(B=1;B<4;B++)
		{
			if(A==B)continue;
			C=6-A-B;
			m[A]='A';
			m[B]='B';
			m[C]='C';
			n[A]=(B>A)+(C==A);
	        n[B]=(A>B)+(A>C);
	        n[C]=(C>B)+(B>A);
			if(((n[A]>n[B]&&B>A)||(n[B]>n[A]&&B<A))+((n[A]>n[C]&&C>A)||(n[C]>n[A]&&C<A))+((n[C]>n[B]&&B>C)||(n[B]>n[C]&&B<C))==3)
			{
				for(i=1;i<4;i++)
					cout<<m[i];             //???????
			}
		}
	}
	return 0;                          //??
}