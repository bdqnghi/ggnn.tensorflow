int main()
{
	int A,B,C,rightA,rightB,rightC;
	for(A=0;A<=2;A++)
		{for(B=0;B<=2;B++)
			{for(C=0;C<=2;C++)
	               {if(B>A&&A==C) rightA=2;
				   else if(B>A||A==C) rightA=1;
				   else rightA=0;
				    if(A>B&&A>C) rightB=2;
				   else if(A>B||A>C) rightB=1;
				   else rightB=0;
				    if(C>B&&B>A) rightC=2;
				   else if(C>B||B>A) rightC=1;
				   else rightC=0;

				   if(rightA>rightB&&rightB>rightC&&A<B&&B<C) cout<<"ABC"<<endl;
				   if(rightA>rightC&&rightC>rightB&&A<C&&C<B) cout<<"ACB"<<endl;
				   if(rightB>rightA&&rightA>rightC&&B<A&&A<C) cout<<"BAC"<<endl;
				   if(rightB>rightC&&rightC>rightA&&B<C&&C<A) cout<<"BCA"<<endl;
				   if(rightC>rightA&&rightA>rightB&&C<A&&A<B) cout<<"CAB"<<endl;
				   if(rightC>rightB&&rightB>rightC&&C<B&&B<A) cout<<"CBA"<<endl;
	}}}
    return 0;
}
