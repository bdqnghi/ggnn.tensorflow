int main ()
{
	int A,B,C,s1,s2,s3,shu[4];//????
	for(A=1;A<=3;A++)//????
		for(B=1;B<=3;B++)
			for(C=1;C<=3;C++)
			{
				s1=(B>A)+(A==C);
				s2=(A>B)+(A>C);
				s3=(C>B)+(B>A);
				if(A+s1==3&&B+s2==3&&C+s3==3)//????
				{
					for(int i=1;i<=3;i++)
					{
						if(A==i)//?????
							cout<<"A";
						if(B==i)
							cout<<"B";
						if(C==i)
							cout<<"C";
					}
				}
			}
			return 0;//??
}