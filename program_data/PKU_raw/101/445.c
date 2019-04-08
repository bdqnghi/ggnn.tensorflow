int main()
{


	int A,B,C,d,e;
	for(A=0;A<=2;A++)
		for(B=0;B<=2;B++)
			for(C=0;C<=2;C++)
			{
				if((A!=B)&&(A!=C)&&(B!=C))
				{
					if(A>B&&B>C&&(B>A||A==C)==0&&C>B&&B>A==1&&((A>B&&A>C)+(A>B||A>C))==1)
					{
						cout<<"C"<<"B"<<"A"<<endl;
					}
					if(A>C&&C>B&&(B>A||A==C)==0&&(A>B&&A>C)==1&&((C>B&&B>A)+(C>B||B>A))==1)
					{
						cout<<"B"<<"C"<<"A"<<endl;
					}
					if(B>A&&A>C&&(B>A||A==C)==0&&(C>B&&B>A)==1&&((B>A&&A==C)+(B>A||A==C))==1)
					{
						cout<<"C"<<"A"<<"B"<<endl;
					}
					if(B>C&&C>A&&(B>A||A==C)==0&&(B>A&&A==C)==1&&((C>B&&B>A)+(C>B||B>A))==1)
					{
						cout<<"A"<<"C"<<"B"<<endl;
					}
					if(C>A&&A>B&&(C>B||B>A)==0&&(A>B&&A>C)==1&&((B>A&&A==C)+(B>A||A==C))==1)
					{
						cout<<"B"<<"A"<<"C"<<endl;
					}
					if(C>B&&B>A&&(C>B||B>A)==0&&(B>A&&A==C)==1&&((A>B&&A>C)+(A>B||A>C))==1)
					{
						cout<<"A"<<"B"<<"C"<<endl;
					}
				}

			}













	return 0;
}