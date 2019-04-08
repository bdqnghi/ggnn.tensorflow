int main()
{
	int A,B,C,i;
	char a[4];
	for(A=1;A<=3;A++)
	{	
		for(B=1;B<=3;B++)
		{
			for(C=1;C<=3;C++)
			{
				if(   (B>A)+(C==A)==3-A  &&  (A>B)+(A>C)==3-B  &&  (C>B)+(B>A)==3-C)
				{
					a[A]='A';
					a[B]='B';
					a[C]='C';
					for(i=1;i<=3;i++)
					{
						cout<<a[i];
					}
				}
			}

		}
	}
	return 0;
}
