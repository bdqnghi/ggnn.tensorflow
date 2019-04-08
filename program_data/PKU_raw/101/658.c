int main()
{
	int A,B,C,i;
	int w[3],p[6];
	for(A=0;A<3;A++)
		for(B=0;B<3;B++)
			for(C=0;C<3;C++)
			{
				w[A]=(B>A)+(C==A);
				w[B]=(A>B)+(A>C);
				w[C]=(C>B)+(B>A);
				p[0]=A>B&&A>C&&B>C&&w[A]<w[B]&&w[B]<<w[C];
				p[1]=A>C&&C>B&&w[A]<w[C]&&w[C]<<w[B];
				p[2]=B>A&&A>C&&w[B]<w[A]&&w[A]<w[C];
				p[3]=B>C&&C>A&&w[B]<w[C]&&w[C]<w[A];
				p[4]=C>A&&A>B&&w[C]<w[A]&&w[A]<w[B];
				p[5]=C>B&&B>A&&w[C]<w[B]&&w[B]<w[A];
				if(p[1]||p[2]||p[3]||p[4]||p[5]==1)
				{
					for(i=0;i<3;i++)
					{
						if(i==A)
							cout<<"A";
						if(i==B)
							cout<<"B";
						if(i==C)
							cout<<"C";
					}
				}
						
			}
	return 0;
}