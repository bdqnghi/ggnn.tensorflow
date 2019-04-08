int main ()
{
	int a=0,b=0,c=0,A=1,B=1,C=1,t=0;
	int judge1,judge2,judge3;
	int q[3];
	char name[3];
	char p;
	for (A=1;A<=3;A++)									//?A,B,C??????????1?3?????
		for (B=1;B<=3;B++)
			for (C=1;C<=3;C++)
			{
				a=((B>A)+(C==A));						            //?a,b,c???????????			
				b=((A>B)+(A>C));
				c=((C>B)+(B>A));
				judge1=((A>B&&a<b)||(A<B&&a>b)||(A==B&&a==b));		//?judge???????????????
				judge2=((B>C&&b<c)||(B<C&&b>c)||(B==C&&b==c));
				judge3=((A>C&&a<c)||(A<C&&a>c)||(A==C&&a==c));
				if ((judge1+judge2+judge3)==3)
				{
					name[0]='A';name[1]='B';name[2]='C';			//????????????
					q[0]=3;q[1]=1;q[2]=2;
					for (int i=0;i<2;i++)
					{
						for (int j=0;j<2-i;j++)
						{
							if (q[j]>q[j+1])
							{
								t=q[j];q[j]=q[j+1];q[j+1]=t;
								p=name[j];name[j]=name[j+1];name[j+1]=p;
							}
						}
					}
					cout<<name[0]<<name[1]<<name[2];
				}
			}
			return 0;
}