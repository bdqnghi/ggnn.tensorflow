int main ()
{
	int A,B,C,TA,TB,TC;
	for(A=1;A<=3;A++)
		for(B=1;B<=3;B++)
			for(C=6-A-B;C<=3;C++)
			{
				if(A==B)break;
				else
				{
					TA=(A<B)+(A==C)+A;
					TB=(B<A)+(C<A)+B;
					TC=(B<C)+(A<B)+C;
					if(TA==3&&TB==3&&TC==3)
					{
						if(A<B&&B<C)cout<<"ABC";
						if(A<C&&C<B)cout<<"ACB";
						if(B<A&&A<C)cout<<"BAC";
						if(B<C&&C<A)cout<<"BCA";
						if(C<A&&A<B)cout<<"CAB";
						if(C<B&&C<A)cout<<"CBA";
					}
				}
			}
	return 0;
}