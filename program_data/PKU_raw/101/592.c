int main()
{
	int A,B,C;
	char quantity[4];
	int As,Bs,Cs;
	for(A=1;A<=3;A++)
	{
		for(B=1;B<=3;B++)
		{
			for(C=1;C<=3;C++)
			{
				As=(B>A)+(C==A);
			    Bs=(A>B)+(A>C);
				Cs=(C>B)+(B>A);
				if(!(A<=B&&As<=Bs||A<=C&&As<=Cs||B<=A&&Bs<=As||B<=C&&Bs<=Cs||C<=A&&Cs<=As||C<=B&&Cs<=Bs))//?????????????????????????????
				{
					quantity[A]='A';
				    quantity[B]='B';
					quantity[C]='C';
					for(int i=1;i<=3;i++)
						cout<<quantity[i];//???????
				}
			}
		}
	}
	cout<<endl;
	
	return 0;
}