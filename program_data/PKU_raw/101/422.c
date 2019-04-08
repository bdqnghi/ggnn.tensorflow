

int main()
{
	int A,B,C,a,b,c;
	for (A=1;A<=3;A++)
		for (B=1;B<=3;B++)
			for (C=1;C<=3;C++)
			{
				a=(B>A)+(C==A);
				b=(A>B)+(A>C);
				c=(C>B)+(B>A);
				if (a==2&&b==1&&c==0&&C>B&&B>A)
					cout<<"A"<<"B"<<"C"<<endl;
				if (a==2&&b==0&&c==1&&B>C&&C>A)
					cout<<"A"<<"C"<<"B"<<endl;
				if (a==1&&b==2&&c==0&&C>A&&A>B)
					cout<<"B"<<"A"<<"C"<<endl;
				if (a==1&&b==0&&c==2&&B>A&&A>C)
					cout<<"C"<<"A"<<"B"<<endl;
				if (a==0&&b==1&&c==2&&A>B&&B>C)
					cout<<"C"<<"B"<<"A"<<endl;
				if (a==0&&b==2&&c==1&&A>C&&C>B)
					cout<<"B"<<"C"<<"A"<<endl;
			}		
			return 0;

}