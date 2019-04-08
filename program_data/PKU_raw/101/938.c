/*
* ???????.cpp
* ??????
* ?????2012.10.30
* ????3???????
*/
int main()
{
	int A,B,C;
	char rank[4];
	int a,b,c,i;
	for (A=1;A<=3;A++)
	{
		for (B=1;B<=3;B++)
		{
			if (A==B)continue;
			C=6-A-B;
			a=(B<A)+(C==A);
			b=(A<B)+(A<C);
			c=(C<B)+(B<A);
			if (A==(a+1)&&B==(b+1)&&C==(c+1))
			{
				rank[A]='A';
				rank[B]='B';
				rank[C]='C';
				for (i=3;i>=1;i--)
					cout<<rank[i];
			}

		}
	}
	return 0;
}
